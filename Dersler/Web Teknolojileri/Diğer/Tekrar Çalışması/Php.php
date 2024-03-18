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
					<tr><td><a href="#">PHP</a></td></tr>
                    <tr><td><a href="Css.html">CSS</a></td></tr>
                    <tr><td><a href="Javascript.html">Javascript</a></td></tr>
                    <tr><td><a href="Boostrap.html">Bootstrap</a></td></tr>
                    <tr><td><a href="jQuery.html">jQuery</a></td></tr>
                </table>
            </td>

            <!-- ------------------------------------------- Article ----------------------------------------------------- -->

            <td id="article" valign="top">
                <?php

                // Comment
                # Comment
                /* Comment */

                /* Array*/

                $array=array(3=>"Muhammet","Kemal","Güvenç");

                print_r($array);

                echo "<br />";

                foreach($array as $value){
	                echo $value."<br />";
                }

                for($i=3; $i<count($array)+3; $i++){
	                echo "$array[$i]";
                }

                /* Associative Array */

                echo "<br /><br />";

                $AssociativeArray=array("Ahmet"=>1,"Fatih"=>2,"Güvenç"=>3);
                echo $AssociativeArray["Ahmet"].$AssociativeArray["Fatih"].$AssociativeArray["Güvenç"]."<br />";



                ?>
            </td>

        </tr>

        <tr id="bottom-footer" height="10%"><td colspan="2" bgcolor="red"></td></tr>
    </table>

</body>
</html>