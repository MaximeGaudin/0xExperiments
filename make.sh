COMPILER=/usr/local/Cellar/gcc/4.9.1/bin/g++-4.9
FLAGS=-std=gnu++11

for i in `ls -d */`; do 
  echo "Building with ${COMPILER}: $i..."
  ${COMPILER} ${FLAGS} ${i}main.cc -o $i/a.out
done
