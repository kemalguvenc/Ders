<?php

echo "Sex:"."<br/>";

echo $_POST["sex"];

$arraysex=array(1=>"Man","Woman");
$arrayteam =array(1=>"Fb","Gs");

if($_POST["sex"]==1){
	echo "SEX: " . "Man";
}
else if($_POST["sex"==2]){
	echo "SEX: " . "Woman";
}

echo "Sex: " . $arraysex[$_POST["sex"]];

echo "<br/> <br/>";

echo "Team: " . $arrayteam[$_POST["team"]];


?>