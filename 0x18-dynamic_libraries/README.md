# 0x18-dynamic_libraries

## Create Dynamic Library Script

- `1-create_dynamic_lib.sh` is a bash script that builds all c source files in
the current working directory and generates a dynamic library from them
with the name `liball.so`.

## Build

### Build The Library (The Shared Object)

- Change working directory to `src/` where the c source code exists

```sh
cd src/
```

- Build all c source files to object files without linking

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
```

- Create the dynamic library with name `libdynamic.so`

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.o -fPIC -o libdynamic.so
```

- Move the dynamic library to the repo root to ease building of the test program

- Then remove all object files generated inside the `src/` directory

```
mv libdynamic.so ..
rm *.o
```

### Build Test

- Build the program with the shared object in the same working directory and
output an executable with the name `len`

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -L. 0-main.c -ldynamic -o len
```

### Run

- To run the test program you need to add the current working directory
or the path where the shared object exist (in our case the root of the repo)

- Make sure to be in the root of the repo then execute the next command line

- The next command line sets the path where the program `len` executed from
the path to look for the shared object at.

```sh
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```

- Now just execute the test program

```sh
./len
```
