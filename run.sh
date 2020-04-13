echo "Compiling..."
gcc -o bin/$1 *.c
if [ $? == 0 ]
then
  ./bin/$1
  rm bin/$1
else
  echo "Compilation Error."
fi