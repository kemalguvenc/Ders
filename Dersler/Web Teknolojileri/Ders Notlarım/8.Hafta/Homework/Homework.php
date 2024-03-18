<html>
    <head>
        <meta charset="utf-8"/>
        <title>Homework</title>
		<link rel="stylesheet" type="text/css" href="Homework_Style"/>
    </head>
    
    <body>
        <table border="1">
				<tr class="head">
                <td>Name</td>
                <td>Surname</td>
                <td>Age</td>
                <td>Job</td>
            	</tr>
            <?php
                $name=array("Muhammet","Kemal","Ahmet","Selim","Sıddıka","Nejat","Necati","Rabia","Fatma","Nurdan");
                $surname=array("Güvenç","Top","Salimoğlu","Tan","Cengiz","Arslan","Kındıroğlu","Demir","Yılmaz","Yıldız");
                $age=array(22,14,8,50,80,49,39,24,53,64);
                $job=array("Engineer","Police","Soldier","Bussinesman","Teacher","Doctor","Artist","Tradesman","Psychologist","Firefighter");
				$class;
                for($x=0;$x<10;$x++){
					if($x%2==0){
					$class="even";
					}
					else{
					$class="odd";
					}
                    echo "<tr class=".$class.">
                         <td>$name[$x]</td>
                         <td>$surname[$x]</td>
                         <td>$age[$x]</td>
                         <td>$job[$x]</td>
                         <tr/>";
                }
            ?>
        </table>
    </body>
</html>