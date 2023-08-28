#!/usr/bin/node
const Camry = {
	"colour": "silver",
	"reg_no": "725621ABJ",
	"door": 4,
	"fire_ext": true
}

Object.freeze(Camry) // prevents any additional cahanges to be made to the object
Camry.fire_ext = false; //modifies the boolean value of fire_ext
Camry.wiper = true; // adds a new object wiper to the objects
console.log(Camry.door) //prints out no. of doors
console.log(Camry.reg_no) //prints out reg_no of the car
console.log(Camry['reg_no']);//prints out reg_no of the car
