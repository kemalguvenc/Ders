<!DOCTYPE html>

<html lang="tr-TR">

<head>

    <meta charset="utf-8" />
    <title></title>

</head>

<body>

    <form method="post">

        <p>Place Folder:  <input type="text" placeholder="Please, enter your name!!!" name="exp_name" /> </p>
        <p>Auto Focus: <input type="text" autofocus name="exp_focus" /> </p>
        <p>AutoComplete (OFF): <input type="text" autocomplete="off" name="exp_autocomplete_off" /> </p>
        <p>Required: <input type="text" required name="exp_required" /> </p>
        <p>E-Mail: <input type="email" name="exp_email" /> </p>
        <p>Pattern: <input type="text" pattern="[0-9]*" name="exp_pattern" /> </p>

        <datalist id="list1">

            <select>

                <option>asd1</option>
                <option>asd2</option>
                <option>asd3</option>

            </select>

        </datalist>

        <p>AutoComplete (ON): <input type="text" autocomplete="on" list="list1" name="exp_autocomplete_on" /> </p>

        <p>Multiple File: <input type="file" multiple name="exp_file" /> </p>



        <input type="submit" value="Submit (1)" />
        <input type="submit" value="Submit (2)" formaction="" formmethod="post" />

    </form>

</body>
</html>