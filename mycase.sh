#!/bin/bash


echo press 1 to check date
echo press 2 to check current directory
echo press 3 to check user
read choice

case $choice in
	1) date;;
	2) pwd;;
	3) whoami;;
	*) echo invalid input;;
esac
