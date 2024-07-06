#!/bin/bash

testrun() {
  if [[ -f bin/$1 ]]; then
    read -p "do you want to run application (y/n): " runapp
    if [[ $runapp = "y" || $runapp = "Y" ]]; then
      exec bin/$1 $2
    fi
  fi
}

#gcc src/devcon.c -o bin/devcon
#testrun devcon

rm bin/devcli
gcc src/devcli.c -o bin/devcli
chmod +x bin/devcli
testrun devcli
