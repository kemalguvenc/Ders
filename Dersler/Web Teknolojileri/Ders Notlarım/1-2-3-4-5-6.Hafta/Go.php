<?php

echo "<pre>";

print_r($_POST);

echo "Name: ";
echo $_POST["name"]."<br />";

echo "Surname: ";
echo $_POST["surname"];
echo "<br>";

echo"Name and Surname: " . $_POST["name"] . " " . $_POST["surname"];

?>

<table width="175" height="30" border=0">

<tr>

<td>Ad</td>
<td>:</td>
<td><?php echo $_POST["name"]; ?></td>

</tr>

<tr>

<td>Password</td>
<td>:</td>
<td><?php echo $_POST["password"]; ?></td>

</tr>

</table>