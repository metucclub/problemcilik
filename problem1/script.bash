mkdir in out

g++ generate.cpp

./a.out

echo in ok

g++ solution.cpp

for value in {1..40}
do
    ./a.out < "in/${value}.in" > "out/${value}.out"
done

echo out ok

zip -r -q tests.zip in out
    
echo zip ok