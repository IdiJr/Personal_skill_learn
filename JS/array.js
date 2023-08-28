#!/usr/bin/node
const ages = [40, 12, 32, 65, 13, 20, 37];

//undefined members: if an item is added to index leaving the preceeding indices empty
//ages[7] = 60;

//ages.pop(); //removes the specified index or memeber from the array
//ages.unshift(19); //adds the value to the beginning
//ages.push(50); //adds the value to the end of the array
//ages.shift(); //
//console.log(ages);
//console.log("Size of array: " + ages.length);

const peers = [["Eric", 40], ["John", 12], ["Godwin", 32]];
console.log(peers[1]); //prints the contents of the main array at index 1
console.log(peers[2][1]); // prints the contents of the subarray index 1 in the array at index 2
