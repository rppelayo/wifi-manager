const char INDEX_HTML[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head>
    <title>iDispaly Navigator</title>
    <meta name="viewport" content="width=device-width, initial-scale=1"charset="UTF-8" />
    <style>
    body{ background-color: #dad6eb; 
        font-family: Arial, Helvetica, Sans-Serif; 
        Color: #000000;
        text-align:center;
        }
    table{ border-collapse: collapse 
        }
    td{ border: 0px 
        solid black;
         padding: 10px; 
        }
    div {
        width: 300px;
        margin: auto;
        border: 3px solid #4287f5;
      }
    </style>
</head>
<body>
<div>
    <h3>Enter your WiFi credentials</h3>
        <form action="/" method="post">
            <table>
                <tr>
                    <td><label>SSID:&nbsp;</label></td>
                    <td><input maxlength="30" name="ssid"></td>
                </tr>
                <tr>
                    <td><label>Password:&nbsp;&nbsp;</label></td>
                    <td><input maxlength="30" name="password"></td>
                </tr>
            </table>
            <input type="submit" value="Save">
        </form>
</div>
</body>
</html>
)=====";
