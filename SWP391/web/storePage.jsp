<!DOCTYPE html>
<html lang="en">

    <head>
        <title>Danh sách nhân viên | Qu?n tr? Admin</title>
        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <!-- Main CSS-->
        <link rel="stylesheet" type="text/css" href="css/main.css">
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/boxicons@latest/css/boxicons.min.css">
        <!-- or -->
        <link rel="stylesheet" href="https://unpkg.com/boxicons@latest/css/boxicons.min.css">
        <link href="https://cdn.datatables.net/1.12.1/css/jquery.dataTables.min.css">
        <link href="https://cdn.datatables.net/datetime/1.1.2/css/dataTables.dateTime.min.css">
        <!-- Font-icon css-->
        <link rel="stylesheet" type="text/css"
              href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
        <script src="https://cdnjs.cloudflare.com/ajax/libs/sweetalert/2.1.2/sweetalert.min.js"></script>
        <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.2/css/all.css">
        <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jquery-confirm/3.3.2/jquery-confirm.min.css">
        <script type="text/javascript" src="scripts/jquery.formatCurrency.js"></script>
        <style>
            body {
                font-family: 'Roboto', sans-serif;
            }
        </style>
    </head>

    <body onload="time()" class="app sidebar-mini rtl">      
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
        <style>
            .rounded {
                border-radius: 50%;
            }

        </style>
    </head>
    <body>
        
        <!-- Navbar-->
        <header class="app-header">
            <!-- Sidebar toggle button--><a class="app-sidebar__toggle" href="#" data-toggle="sidebar"
                                            aria-label="Hide Sidebar"></a>
            <!-- Navbar Right Menu-->
        </header>
        <!-- Sidebar menu-->
        <div class="app-sidebar__overlay" data-toggle="sidebar"></div>
        <aside class="app-sidebar">
            

            <hr>
            <ul class="app-menu">
              
                <li><a class="app-menu__item " href="ManagerController?action=managerstaff"><i 
                            class='app-menu__icon bx bx-id-card'></i><span class="app-menu__label">Qu?n lý nhân viên</span></a>
                </li>
            
              
            </ul>
        </aside>
        <script>
            document.addEventListener("DOMContentLoaded", function () {
                var currentUrl = window.location.href;

                // Tìm ph?n t? li có href t??ng ?ng v?i URL hi?n t?i và thêm l?p active
                var navItems = document.querySelectorAll(".app-menu__item");
                navItems.forEach(function (item) {
                    if (item.href === currentUrl) {
                        item.classList.add("active");
                    }
                });
            });
        </script>
    </body>
</html>







