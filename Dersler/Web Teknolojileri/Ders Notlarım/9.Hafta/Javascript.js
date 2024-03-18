console.log("example");
document.write("example2");

function example(){
    console.log("1");
}

function array() {

    var array = ["sau", "itu", "odtu"];

    for (var i = 0; i < array.length; i++) {

        document.write("<h1>"+array[i]+"</h1><br/>");

    }

}

var no1 = prompt("Enter the first number");
var no2 = prompt("Enter the second number");
total = Number(no1) + Number(no2);
alert("Total:" + total);

for (i = 0; i < 10; i++) {

    document.write(total+"<br/>");
    example();

}

array();

var std = {
    StdNo: 10,
    StdName: "Kemal",
    StdDepartment: "Computer",
    Courses: ["Math","Physics"],
    Speak: function () {
        console.log("My name is" + this.StdName);
    }
}

std.age= 22;

document.write(std.StdName+"<br/>");
console.log(std.age);

document.write(std);
console.log(std);

std.Speak();

console.log(std.Courses[0]);