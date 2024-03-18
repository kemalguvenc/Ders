<html lang="tr-TR">
<head>
    <meta charset="utf-8" />
    <title>Home Page</title>
</head>
<body>

    <table width="100%" height="100%" border="1">
        <tr id="top" height="20%" bgcolor="red">
            <td colspan="2" align="center"><img src="https://teknoseyir.com/wp-content/themes/ts/images/ts_logo.svg" /></td>
        </tr>

        <tr id="middle" height=70%">

            <td id="navigator" width="10%" valign="top">
                <table>
                    <tr><td><a href="Index.html">Home Page</a></td></tr>
                    <tr><td><a href="HtmlTags.html">HTML Tags</a></td></tr>
                    <tr><td><a href="HtmlForm.html">HTML Form</a></td></tr>
                    <tr><td><a href="Php.php">PHP</a></td></tr>
                    <tr><td><a href="Css.html">CSS</a></td></tr>
                    <tr><td><a href="Javascript.html">Javascript</a></td></tr>
                    <tr><td><a href="Boostrap.html">Bootstrap</a></td></tr>
                    <tr><td><a href="jQuery.html">jQuery</a></td></tr>
                </table>
            </td>

            <!-- ------------------------------------------- Article ----------------------------------------------------- -->

            <td id="article">
				<table>
					<tr>
						<td>Input - Text1: </td>
						<td>
							<?php
							if(!empty($_POST["Text1"]))
							{
								echo $_POST["Text1"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Text2: </td>
						<td>
							<?php
							if(!empty($_POST["Text2"]))
							{
								echo $_POST["Text2"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Password: </td>
						<td>
							<?php
							if(!empty($_POST["Password"]))
							{
								echo $_POST["Password"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Radio: </td>
						<td>
							<?php
							if(!empty($_POST["Radio"]))
							{
								echo $_POST["Radio"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Checkboxes: </td>
						<td>
							<?php
							if(!empty($_POST["Checkbox"]))
							{
								foreach($_POST["Checkbox"] as $value)
								echo $value.", ";
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - File: </td>
						<td>
							<?php
							if(!empty($_POST["File"]))
							{
								echo $_POST["File"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Email: </td>
						<td>
							<?php
							if(!empty($_POST["Email"]))
							{
								echo $_POST["Email"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Color: </td>
						<td>
							<?php
							if(!empty($_POST["Color"]))
							{
								echo $_POST["Color"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Date: </td>
						<td>
							<?php
							if(!empty($_POST["Date"]))
							{
								echo $_POST["Date"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Datetime: </td>
						<td>
							<?php
							if(!empty($_POST["Datetime"]))
							{
								echo $_POST["Datetime"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Datetime-local: </td>
						<td>
							<?php
							if(!empty($_POST["Datetime-local"]))
							{
								echo $_POST["Datetime-local"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Month: </td>
						<td>
							<?php
							if(!empty($_POST["Month"]))
							{
								echo $_POST["Month"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Week: </td>
						<td>
							<?php
							if(!empty($_POST["Week"]))
							{
								echo $_POST["Week"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Time: </td>
						<td>
							<?php
							if(!empty($_POST["Time"]))
							{
								echo $_POST["Time"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Hidden: </td>
						<td>
							<?php
							if(!empty($_POST["Hidden"]))
							{
								echo $_POST["Hidden"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Image: </td>
						<td>
							<?php
							if(!empty($_POST["Image"]))
							{
								echo $_POST["Image"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Number: </td>
						<td>
							<?php
							if(!empty($_POST["Number"]))
							{
								echo $_POST["Number"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Range: </td>
						<td>
							<?php
							if(!empty($_POST["Range"]))
							{
								echo $_POST["Range"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Search: </td>
						<td>
							<?php
							if(!empty($_POST["Search"]))
							{
								echo $_POST["Search"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Tel: </td>
						<td>
							<?php
							if(!empty($_POST["Tel"]))
							{
								echo $_POST["Tel"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Input - Url: </td>
						<td>
							<?php
							if(!empty($_POST["Url"]))
							{
								echo $_POST["Url"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Text Area: </td>
						<td>
							<?php
							if(!empty($_POST["Textarea"]))
							{
								echo $_POST["Textarea"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
					<tr>
						<td>Select: </td>
						<td>
							<?php
							if(!empty($_POST["Select"]))
							{
								echo $_POST["Select"];
							}
							else echo "Empty"
							?>
						</td>
					</tr>
				</table>
            </td>

        </tr>

        <tr id="bottom-footer" height="10%"><td colspan="2" bgcolor="red"></td></tr>
    </table>

</body>
</html>