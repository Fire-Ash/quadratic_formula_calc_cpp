#!/bin/sh

main() {
echo "Are you sure that you want to uninstall qf-calc? (y/n)"
read response
if [ "$response" = "y" ]; then
  sudo rm /usr/bin/qf-calc
elif [ "$response" = "n" ]; then
  echo "exiting..."
  exit 0
else
  echo "'$response' is not a valid option."
  main
fi
}

main