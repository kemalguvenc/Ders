<html>

<head>



</head>


<body>

    <table border="1">

        <tr>
            <td>Name</td>
            <td><?php
            echo $_POST["name"];
            ?></td>
        </tr>

        <tr>
            <td>Surname</td>
            <td>
                <?php
                echo $_POST["surname"];
                ?>
            </td>
        </tr>

        <tr>
            <td>E-Mail</td>
            <td>
                <?php
                echo $_POST["mail"];
                ?>
            </td>
        </tr>

        <tr>
            <td>Hobbies</td>
            <td>
                <?php
                $array=implode('.',$_POST["hobbies"]);
                echo $array;
                ?>
            </td>
        </tr>

        <tr>
            <td>Team</td>
            <td>
                <?php
                echo $_POST["team"];
                ?>
            </td>
        </tr>

        <tr>
            <td>Description</td>
            <td>
                <?php
                echo $_POST["description"];
                ?>
            </td>
        </tr>

        <tr>
            <td>City</td>
            <td>
                <?php
                echo $_POST["city"];
                ?>
            </td>
        </tr>

    </table>

</body>

</html>