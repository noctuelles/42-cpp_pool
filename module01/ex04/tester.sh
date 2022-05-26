#!/bin/bash

# Testing script for CPP Module 01 ex04

chmod -r ./tests/hello_world_not_readable

PROGRAM="./sed_for_looser"

echo -e "Opening non-existent file :\n"

$PROGRAM foo a b
echo

echo -e "Opening non-readable file :\n"

$PROGRAM ./tests/hello_world_not_readable a b
echo

echo -e "Replacing all space by '[#]' in ./tests/lorem_ipsum...\n"

$PROGRAM ./tests/lorem_ipsum " " "[#]"
diff --color ./tests/lorem_ipsum ./tests/lorem_ipsum.replace
rm ./tests/lorem_ipsum.replace
echo

echo -e "Replacing the first paragraph by '_' ./tests/lorem_ipsum...\n"

$PROGRAM ./tests/lorem_ipsum "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas vel eros porttitor, maximus ipsum et, scelerisque lectus. Nam tincidunt sed nisl ac iaculis. Vivamus nec blandit dui, vel rhoncus enim. Phasellus scelerisque diam dolor, id commodo neque tristique ac. Nunc cursus nisl quis erat condimentum, ac sagittis nisl scelerisque. Duis quis auctor ex, non vulputate erat. Nulla a imperdiet nisl, ultrices suscipit augue. Fusce molestie accumsan feugiat. Nullam vehicula feugiat lacus dignissim aliquam. Etiam sit amet dolor at neque blandit finibus quis eget felis. Morbi porta interdum eros, eget sollicitudin turpis varius ac." "_"
diff --color ./tests/lorem_ipsum ./tests/lorem_ipsum.replace
rm ./tests/lorem_ipsum.replace
echo

echo -e "Replacing nothing by '_' ./tests/lorem_ipsum...\n"

$PROGRAM ./tests/lorem_ipsum "" "_"
diff --color ./tests/lorem_ipsum ./tests/lorem_ipsum.replace
rm ./tests/lorem_ipsum.replace
echo

echo -e "Replacing nothing by nothing ./tests/lorem_ipsum...\n"

$PROGRAM ./tests/lorem_ipsum "" ""
diff --color ./tests/lorem_ipsum ./tests/lorem_ipsum.replace
rm ./tests/lorem_ipsum.replace
echo

chmod +r ./tests/hello_world_not_readable
