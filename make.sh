COMPILER=g++-mp-4.6
FLAGS=-std=gnu++0x

for i in `ls -d */`; do 
  echo "Building with g++: $i..."
  ${COMPILER} ${FLAGS} $i/main.cc -o $i/a.out
done
