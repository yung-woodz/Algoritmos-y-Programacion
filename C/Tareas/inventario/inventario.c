// Dilan Alonso Toro Moraga
// 20.956.529-3

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define USUARIO "yungwoodz"
#define PASSWORD "dilantorom123"

// Funcion nombre en pantalla
void nombre_apellido();

// Funciones
int agregar();
int actualizar();
int listar();
int eliminar();
int opciones_menu(int opcion);
int menu_principal();

// Funciones de agregar
void agreteclado();
void agremouse();
void agremonitor();
void agrenotebook();
void agre_escritorio();

// Funciones de actualizar
void actuateclado();
void actuamouse();
void actuamonitor();
void actuanotebook();
void actua_escritorio();

// Funciones de listar
void listeclado();
void listmouse();
void listmonitor();
void listnotebook();
void list_escritorio();

// Funciones de eliminar
void elimiteclado();
void elimimouse();
void elimimonitor();
void eliminotebook();
void elimi_escritorio();

// Estructuras
typedef struct {
    int identificador;
    char marca[30];
    char modelo[30];
    char idioma[30];
}teclado; // Productos con id: {(101),(102),(103)}

typedef struct {
    int identificador;
    char marca[30];
    char modelo[30];
}mouse; // Productos con id: {(201),(202),(203)}

typedef struct {
    int identificador;
    char marca[30];
    char modelo[30];
    char tamano[30];
}monitor; // Productos con id: {(301),(302),(303)}

typedef struct {
    int identificador;
    char marca[30];
    char modelo[30];
    char ram[30];
    char procesador[30];
    char pantalla[30];
}notebook; // Productos con id: {(401),(402),(03)}

typedef struct {
    int identificador;
    char marca[30];
    char modelo[30];
    char ram[30];
    char procesador[30];
    teclado escritorio_teclado;
    mouse escritorio_mouse;
    monitor escritorio_monitor;
}pcEscritorio; // El codigo del escritorio iba bien hasta que de la nada ya no se guardaban los producto, disculpe.

// estructura usuario
typedef struct {
    int identificador;
    char user_name[20];
    char password[20];
    char nombre1[20];
    char nombre2[20];
    char apellido_paterno[20];
    char apellido_materno[20];
}user;

int main () {

    user u;    

    // LOGIN + PASSWORD

    do {
        printf("User Name: ");
        gets(u.user_name);
        printf("Password: ");
        gets(u.password);
        if (strcmp(u.user_name, USUARIO) != 0 || strcmp(u.password, PASSWORD) != 0){
            system("cls");
            printf("ERROR: INGRESE NUEVAMENTE LOS DATOS");
            printf("\n");
        }
    } while (strcmp(u.user_name, USUARIO) != 0 || strcmp(u.password, PASSWORD) != 0);

    menu_principal();

}

int menu_principal() {
    int opcion;
    do {
        system("cls");
        nombre_apellido();
        printf("\n\n\t%cQu%c desea realizar?", 168,130);
        printf("\n\n\t1. Agregar un producto");
        printf("\n\t2. Actualizar un producto");
        printf("\n\t3. Listar un producto");
        printf("\n\t4. Eliminar un producto");
        printf("\n\t5. Salir del programa\n\n");
        printf("     -> ");
        scanf("%d", &opcion);
    } while(opcion < 1 || opcion > 5);

    opciones_menu(opcion);
}

int opciones_menu(int opcion) {

    switch (opcion) {
        case 1: // agregar
            nombre_apellido();
            printf("\n\n\tQue producto desea agregar?");
            agregar();
        break;
        case 2: // actualizar
            nombre_apellido();
            printf("\n\n\tQue producto desea actualizar?");
            actualizar();
        break;
        case 3: // listar
            nombre_apellido();
            printf("\n\n\tQue producto desea listar?");
            listar();
        break;
        case 4: // eliminar
            nombre_apellido();
            printf("\n\n\tQue producto desea eliminar?");
            eliminar();
        break;
        case 5: // salir del programa
            printf("Adios");
        break;
    } 

}

int agregar() {

    int opcion;

    printf("\n\n\t1. Agregar teclado");
    printf("\n\t2. Agregar mouse");
    printf("\n\t3. Agregar monitor");
    printf("\n\t4. Agregar notebook");
    printf("\n\t5. Agregar PC de escritorio");
    printf("\n\t6. Volver al menu");
    printf("\n\t7. Salir del programa\n\n");
    printf("     -> ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            system("cls");
            nombre_apellido();
            agreteclado();
        break;
        case 2:
            system("cls");
            nombre_apellido();
            agremouse();
        break;
        case 3:
            system("cls");
            nombre_apellido();
            agremonitor();
        break;
        case 4:
            system("cls");
            nombre_apellido();
            agrenotebook();
        break;
        case 5:
            system("cls");
            nombre_apellido();
            agre_escritorio();
        break;
    }

    if(opcion == 6) {
        system("cls");
        nombre_apellido();
        printf("\n\n\t%cQu%c desea realizar?", 168,130);
        printf("\n\n\t1. Agregar un producto");
        printf("\n\t2. Actualizar un producto");
        printf("\n\t3. Listar un producto");
        printf("\n\t4. Eliminar un producto");
        printf("\n\t5. Salir del programa\n\n");
        printf("     -> ");
        scanf("%d", &opcion);

        return opciones_menu(opcion);
    }

    if(opcion < 1 || opcion > 7) {
        return opciones_menu(1);
    }

}

int actualizar() {

    int opcion;

    printf("\n\n\t1. Actualizar teclado");
    printf("\n\t2. Actualizar mouse");
    printf("\n\t3. Actualizar monitor");
    printf("\n\t4. Actualizar notebook");
    printf("\n\t5. Actualizar PC de escritorio");
    printf("\n\t6. Volver al menu");
    printf("\n\t7. Salir del programa\n\n");
    printf("     -> ");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            system("cls");
            nombre_apellido();
            actuateclado();
        break;
        case 2:
            system("cls");
            nombre_apellido();
            actuamouse();
        break;
        case 3:
            system("cls");
            nombre_apellido();
            actuamonitor();
        break;
        case 4:
            system("cls");
            nombre_apellido();
            actuanotebook();
        break;
        case 5:
            system("cls");
            nombre_apellido();
            actua_escritorio();
        break;
    
    }

    if(opcion == 6){
        system("cls");
        nombre_apellido();
        printf("\n\n\t%cQu%c desea realizar?", 168,130);
        printf("\n\n\t1. Agregar un producto");
        printf("\n\t2. Actualizar un producto");
        printf("\n\t3. Listar un producto");
        printf("\n\t4. Eliminar un producto");
        printf("\n\t5. Salir del programa\n\n");
        printf("     -> ");
        scanf("%d", &opcion);

        return opciones_menu(opcion);
    }

    if(opcion < 1 || opcion > 7) {
        return opciones_menu(2);
    }

}

int listar() {

    int opcion;

    printf("\n\n\t1. Listar teclado");
    printf("\n\t2. Listar mouse");
    printf("\n\t3. Listar monitor");
    printf("\n\t4. Listar notebook");
    printf("\n\t5. Listar PC de escritorio");
    printf("\n\t6. Volver al menu");
    printf("\n\t7. Salir del programa\n\n");
    printf("     -> ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            system("cls");
            nombre_apellido();
            listeclado();
        break;
        case 2:
            system("cls");
            nombre_apellido();
            listmouse();
        break;
        case 3:
            system("cls");
            nombre_apellido();
            listmonitor();
        break;
        case 4:
            system("cls");
            nombre_apellido();
            listnotebook();
        break;
        case 5:
            system("cls");
            nombre_apellido();
            list_escritorio();
        break;
    }

    if(opcion == 6) {
        system("cls");
        nombre_apellido();
        printf("\n\n\t%cQu%c desea realizar?", 168,130);
        printf("\n\n\t1. Agregar un producto");
        printf("\n\t2. Actualizar un producto");
        printf("\n\t3. Listar un producto");
        printf("\n\t4. Eliminar un producto");
        printf("\n\t5. Salir del programa\n\n");
        printf("     -> ");
        scanf("%d", &opcion);

        return opciones_menu(opcion);
    }

    if(opcion < 1 || opcion > 7) {
        return opciones_menu(3);
    }

}

int eliminar() {

    int opcion;

    printf("\n\n\t1. Eliminar teclado");
    printf("\n\t2. Eliminar mouse");
    printf("\n\t3. Eliminar monitor");
    printf("\n\t4. Eliminar notebook");
    printf("\n\t5. Eliminar PC de escritorio");
    printf("\n\t6. Volver al menu");
    printf("\n\t7. Salir del programa\n\n");
    printf("     -> ");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            system("cls");
            nombre_apellido();
            elimiteclado();
        break;
        case 2:
            system("cls");
            nombre_apellido();
            elimimouse();
        break;
        case 3:
            system("cls");
            nombre_apellido();
            elimimonitor();
        break;
        case 4:
            system("cls");
            nombre_apellido();
            eliminotebook();
        break;
        case 5:
            system("cls");
            nombre_apellido();
            elimi_escritorio();
        break;
    }

    if(opcion == 6) {
        system("cls");
        nombre_apellido();
        printf("\n\n\t%cQu%c desea realizar?", 168,130);
        printf("\n\n\t1. Agregar un producto");
        printf("\n\t2. Actualizar un producto");
        printf("\n\t3. Listar un producto");
        printf("\n\t4. Eliminar un producto");
        printf("\n\t5. Salir del programa\n\n");
        printf("     -> ");
        scanf("%d", &opcion);

        return opciones_menu(opcion);
    }

    if(opcion < 1 || opcion > 7) {
        return opciones_menu(4);
    }

}

void nombre_apellido() {

    user u;

    // USUARIO 
    strcpy(u.nombre1, "Dilan");
    strcpy(u.nombre2, "Alonso");
    strcpy(u.apellido_paterno, "Toro");
    strcpy(u.apellido_materno, "Moraga");

    // Imprimir por pantalla
    system("cls");
    printf("\t\tBIENVENIDO");
    printf("\n\t%s %s %s %s", u.nombre1, u.nombre2, u.apellido_paterno, u.apellido_materno);

}

// AGREGAR

void agreteclado(){

    int opcion, i, j=1;
    FILE *productos;
    teclado archivo;
    
    for(i=0 ; i<j ; i++){

        printf("\n\n\t\tTeclado\n");
        productos = fopen("teclado.txt", "a");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.modelo);

        printf("\n\tIdioma: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.idioma);

        if(productos == NULL){
            printf("\n\tEl archivo no existe\n");
        } else {
            printf("\n\t  Nuevo teclado agregado\n");
        }

        fwrite(&archivo, sizeof(teclado), 1, productos);
        fclose(productos);

        do{
            printf("\n\tDesea agregar otro producto: \n");
            printf("\n\t\t1. Si");
            printf("\n\t\t2. No\n");
            printf("     -> ");
            scanf("%d", &opcion);
        }while(opcion < 1 || opcion > 2);

        if(opcion == 1){
            j = j + 1;
            system("cls");
            nombre_apellido();
        }

    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }


}

void agremouse(){

    int opcion, i, j=1;
    FILE *productos;
    mouse archivo;
    
    for(i=0 ; i<j ; i++){

        printf("\n\n\t\tMouse\n");
        productos = fopen("mouse.txt", "a");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.modelo);

        if(productos == NULL){
            printf("\n\tEl archivo no existe\n");
        } else {
            printf("\n\t  Nuevo mouse agregado\n");
        }

        fwrite(&archivo, sizeof(mouse), 1, productos);
        fclose(productos);

        do{
            printf("\n\tDesea agregar otro producto: \n");
            printf("\n\t\t1. Si");
            printf("\n\t\t2. No\n");
            printf("     -> ");
            scanf("%d", &opcion);
        }while(opcion < 1 || opcion > 2);

        if(opcion == 1){
            j = j + 1;
        }

        system("cls");
        nombre_apellido();

    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void agremonitor(){

    int opcion, i, j=1;
    FILE *productos;
    monitor archivo;
    
    for(i=0 ; i<j ; i++){

        printf("\n\n\t\tMonitor\n");
        productos = fopen("monitor.txt", "a");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.modelo);

        printf("\n\tTamano: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.tamano);

        if(productos == NULL){
            printf("\n\tEl archivo no existe\n");
        } else {
            printf("\n\t  Nuevo monitor agregado\n");
        }

        fwrite(&archivo, sizeof(monitor), 1, productos);
        fclose(productos);

        do{
            printf("\n\tDesea agregar otro producto: \n");
            printf("\n\t\t1. Si");
            printf("\n\t\t2. No\n");
            printf("     -> ");
            scanf("%d", &opcion);
        }while(opcion < 1 || opcion > 2);

        if(opcion == 1){
            j = j + 1;
            system("cls");
            nombre_apellido();
        }

    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void agrenotebook(){

    int opcion, i, j=1;
    FILE *productos;
    notebook archivo;
    
    for(i=0 ; i<j ; i++){

        printf("\n\n\t\tNotebook\n");
        productos = fopen("notebook.txt", "a");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.modelo);

        printf("\n\tCantidad de ram: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.ram);

        printf("\n\tProcesador: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.procesador);

        printf("\n\tPantalla: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.pantalla);

        if(productos == NULL){
            printf("\n\tEl archivo no existe\n");
        } else {
            printf("\n\t  Nuevo notebook agregado\n");
        }

        fwrite(&archivo, sizeof(notebook), 1, productos);
        fclose(productos);

        do{
            printf("\n\tDesea agregar otro producto: \n");
            printf("\n\t\t1. Si");
            printf("\n\t\t2. No\n");
            printf("     -> ");
            scanf("%d", &opcion);
        }while(opcion < 1 || opcion > 2);

        if(opcion == 1){
            j = j + 1;
            system("cls");
            nombre_apellido();
        }

    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void agre_escritorio(){

    int opcion, i, j=1;
    FILE *productos;
    pcEscritorio archivo;
    
    for(i=0 ; i<j ; i++){

        printf("\n\n\t\tPC de escritorio\n");
        productos = fopen("escritorio.txt", "a");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.modelo);

        printf("\n\tCantidad de ram: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.ram);

        printf("\n\tProcesador: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.procesador);

        printf("\n\t\tTeclado del PC\n");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.escritorio_teclado.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_teclado.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_teclado.modelo);

        printf("\n\tIdioma: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_teclado.idioma);

        printf("\n\t\tMouse del PC\n");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.escritorio_mouse.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_mouse.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_mouse.modelo);

        printf("\n\t\tMonitor del PC\n");

        printf("\n\tIdentificador: \n");
        printf("     -> ");
        fflush(stdin);
        scanf("%d", &archivo.escritorio_monitor.identificador);

        printf("\n\tMarca: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_monitor.marca);

        printf("\n\tModelo: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_monitor.modelo);

        printf("\n\tTamano: \n");
        printf("     -> ");
        fflush(stdin);
        gets(archivo.escritorio_monitor.tamano);

        if(productos == NULL){
            printf("\n\tEl archivo no existe\n");
        } else {
            printf("\n\t  Nuevo PC agregado\n");
        }

        fwrite(&archivo, sizeof(pcEscritorio), 1, productos);
        fclose(productos);

        do{
            printf("\n\tDesea agregar otro producto: \n");
            printf("\n\t\t1. Si");
            printf("\n\t\t2. No\n");
            printf("     -> ");
            scanf("%d", &opcion);
        }while(opcion < 1 || opcion > 2);

        if(opcion == 1){
            j = j + 1;
            system("cls");
            nombre_apellido();
        }

    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

// ACTUALIZAR

void actuateclado(){

    FILE *productos, *productos1;
    teclado archivo;
    int buscador, validador = 0;

    productos = fopen("teclado.txt", "r");
    productos1 = fopen("actualizar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(teclado), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tIdioma: ");
            printf("%s\n", archivo.idioma);

            printf("\n\tActualice los nuevos datos: \n");

            printf("\n\t*Marca: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.marca);

            printf("\n\t*Modelo: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.modelo);

            printf("\n\t*Idioma: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.idioma);

            fwrite(&archivo, sizeof(teclado), 1, productos1);
            validador = validador + 1;

        } else {
            fwrite(&archivo, sizeof(teclado), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        actuateclado();
    } else {
        remove("teclado.txt");
        rename("actualizar.txt", "teclado.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }

}

void actuamouse(){

    FILE *productos, *productos1;
    mouse archivo;
    int buscador, validador = 0;

    productos = fopen("mouse.txt", "r");
    productos1 = fopen("actualizar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(mouse), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s\n", archivo.modelo);

            printf("\n\tActualice los nuevos datos: \n");

            printf("\n\t*Marca: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.marca);

            printf("\n\t*Modelo: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.modelo);

            fwrite(&archivo, sizeof(mouse), 1, productos1);
            validador = validador + 1;

        } else {
            fwrite(&archivo, sizeof(mouse), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        actuamouse();
    } else {
        remove("mouse.txt");
        rename("actualizar.txt", "mouse.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void actuamonitor(){

    FILE *productos, *productos1;
    monitor archivo;
    int buscador, validador = 0;

    productos = fopen("monitor.txt", "r");
    productos1 = fopen("actualizar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(monitor), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tTamano: ");
            printf("%s\n", archivo.tamano);

            printf("\n\tActualice los nuevos datos: \n");

            printf("\n\t*Marca: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.marca);

            printf("\n\t*Modelo: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.modelo);

            printf("\n\t*Tamano: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.tamano);

            fwrite(&archivo, sizeof(monitor), 1, productos1);
            validador = validador + 1;

        } else {
            fwrite(&archivo, sizeof(monitor), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        actuamonitor();
    } else {
        remove("monitor.txt");
        rename("actualizar.txt", "monitor.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void actuanotebook(){

    FILE *productos, *productos1;
    notebook archivo;
    int buscador, validador = 0;

    productos = fopen("notebook.txt", "r");
    productos1 = fopen("actualizar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(notebook), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tCantidad de RAM: ");
            printf("%s", archivo.ram);

            printf("\n\tProcesador: ");
            printf("%s", archivo.procesador);

            printf("\n\tPantalla: ");
            printf("%s", archivo.pantalla);

            printf("\n\tActualice los nuevos datos: \n");

            printf("\n\t*Marca: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.marca);

            printf("\n\t*Modelo: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.modelo);

            printf("\n\t*Cantidad de RAM: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.ram);

            printf("\n\t*Procesador: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.procesador);

            printf("\n\t*Pantalla: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.pantalla);

            fwrite(&archivo, sizeof(notebook), 1, productos1);
            validador = validador + 1;

        } else {
            fwrite(&archivo, sizeof(notebook), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        actuanotebook();
    } else {
        remove("notebook.txt");
        rename("actualizar.txt", "notebook.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void actua_escritorio(){

    FILE *productos, *productos1;
    pcEscritorio archivo;
    int opcion, buscador, validador = 0;

    productos = fopen("escritorio.txt", "r");
    productos1 = fopen("actualizar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(pcEscritorio), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tCantidad de RAM: ");
            printf("%s", archivo.ram);

            printf("\n\tProcesador: ");
            printf("%s\n", archivo.procesador);

            // TECLADO

            printf("\n\t\tTeclado del PC: \n");
            printf("\n\tMarca: ");
            printf("%s", archivo.escritorio_teclado.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.escritorio_teclado.modelo);

            printf("\n\tIdioma: ");
            printf("%s\n", archivo.escritorio_teclado.idioma);

            // MOUSE

            printf("\n\t\tMouse del PC: \n");
            printf("\n\tMarca: ");
            printf("%s", archivo.escritorio_mouse.marca);

            printf("\n\tModelo: ");
            printf("%s\n", archivo.escritorio_mouse.modelo);

            // MONITOR

            printf("\n\t\tMonitor del PC: \n");
            printf("\n\tMarca: ");
            printf("%s", archivo.escritorio_monitor.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.escritorio_monitor.modelo);

            printf("\n\tTamano: ");
            printf("%s\n", archivo.escritorio_monitor.tamano);

            // Actualizar datos

            printf("\n\tActualice los nuevos datos: \n");

            printf("\n\t*Marca: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.marca);

            printf("\n\t*Modelo: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.modelo);

            printf("\n\t*Cantidad de RAM: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.ram);

            printf("\n\t*Procesador: \n");
            printf("     -> ");
            fflush(stdin);
            gets(archivo.procesador);

            printf("\n\tQue productos de este PC desea actualizar? \n");
            printf("\n\t1. Teclado");
            printf("\n\t2. Mouse");
            printf("\n\t3. Monitor");
            printf("\n\t4. Todos los productos\n");

            do{
                printf("     -> ");
                fflush(stdin);
                scanf("%d", &opcion);
            }while(opcion < 1 || opcion > 4);

            switch (opcion) {
                case 1: // Teclado
                    printf("\n\t\tTeclado del PC: \n");
                    printf("\n\t*Marca: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_teclado.marca);

                    printf("\n\t*Modelo: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_teclado.modelo);

                    printf("\n\t*Idioma: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_teclado.idioma);

                break;
                case 2: // Mouse
                    printf("\n\t\tMouse del PC: \n");
                    printf("\n\t*Marca: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_mouse.marca);

                    printf("\n\t*Modelo: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_mouse.modelo);

                break;
                case 3: // Monitor
                    printf("\n\t\tMonitor del PC: \n");
                    printf("\n\t*Marca: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_monitor.marca);

                    printf("\n\t*Modelo: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_monitor.modelo);

                    printf("\n\t*Tamano: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_monitor.tamano);

                break;
                case 4:// TODOS
                    // TECLADO 
                    printf("\n\t\tTeclado del PC: \n");
                    printf("\n\t*Marca: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_teclado.marca);

                    printf("\n\t*Modelo: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_teclado.modelo);

                    printf("\n\t*Idioma: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_teclado.idioma);
                    
                    // MOUSE

                    printf("\n\t\tMouse del PC: \n");
                    printf("\n\t*Marca: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_mouse.marca);

                    printf("\n\t*Modelo: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_mouse.modelo);

                    // MONITOR

                    printf("\n\t\tMonitor del PC: \n");
                    printf("\n\t*Marca: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_monitor.marca);

                    printf("\n\t*Modelo: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_monitor.modelo);

                    printf("\n\t*Tamano: \n");
                    printf("     -> ");
                    fflush(stdin);
                    gets(archivo.escritorio_monitor.tamano);

                break;
            }

            fwrite(&archivo, sizeof(pcEscritorio), 1, productos1);
            validador = validador + 1;

        } else {
            fwrite(&archivo, sizeof(pcEscritorio), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        actua_escritorio();
    } else {
        remove("escritorio.txt");
        rename("actualizar.txt", "escritorio.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

// LISTAR

void listeclado(){

    FILE *productos;
    teclado archivo;

    productos = fopen("teclado.txt", "r");

    if(productos == NULL){
        printf("\n\n\tNo existen productos");
    } else {
        printf("\n\n\tTeclados disponibles: \n");
    }

    while (fread(&archivo, sizeof(teclado), 1, productos)) {
        printf("\t--------------------");
        printf("\n\tIdentificador: ");
        printf("%d", archivo.identificador);

        printf("\n\tMarca: ");
        printf("%s", archivo.marca);

        printf("\n\tModelo: ");
        printf("%s", archivo.modelo);

        printf("\n\tIdioma: ");
        printf("%s\n", archivo.idioma);
    }

    fclose(productos);
    
    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }

}

void listmouse(){

    FILE *productos;
    mouse archivo;

    productos = fopen("mouse.txt", "r");

    if(productos == NULL){
        printf("\n\n\tNo existen productos");
    } else {
        printf("\n\n\tMouses disponibles: \n");
    }

    while (fread(&archivo, sizeof(mouse), 1, productos)) {
        printf("\t--------------------");
        printf("\n\tIdentificador: ");
        printf("%d", archivo.identificador);

        printf("\n\tMarca: ");
        printf("%s", archivo.marca);

        printf("\n\tModelo: ");
        printf("%s\n", archivo.modelo);
    }

    fclose(productos);

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }

}

void listmonitor(){

    FILE *productos;
    monitor archivo;

    productos = fopen("monitor.txt", "r");

    if(productos == NULL){
        printf("\n\n\tNo existen productos");
    } else {
        printf("\n\n\tMonitores disponibles: \n");
    }

    while (fread(&archivo, sizeof(monitor), 1, productos)) {
        printf("\t--------------------");
        printf("\n\tIdentificador: ");
        printf("%d", archivo.identificador);

        printf("\n\tMarca: ");
        printf("%s", archivo.marca);

        printf("\n\tModelo: ");
        printf("%s", archivo.modelo);

        printf("\n\tTamano: ");
        printf("%s\n", archivo.tamano);
    }

    fclose(productos);

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void listnotebook(){

    FILE *productos;
    notebook archivo;

    productos = fopen("notebook.txt", "r");

    if(productos == NULL){
        printf("\n\n\tNo existen productos");
    } else {
        printf("\n\n\tNotebooks disponibles: \n");
    }

    while (fread(&archivo, sizeof(notebook), 1, productos)) {
        printf("\t--------------------");
        printf("\n\tIdentificador: ");
        printf("%d", archivo.identificador);

        printf("\n\tMarca: ");
        printf("%s", archivo.marca);

        printf("\n\tModelo: ");
        printf("%s", archivo.modelo);

        printf("\n\tCantidad de ram: ");
        printf("%s", archivo.ram);

        printf("\n\tProcesador: ");
        printf("%s", archivo.procesador);

        printf("\n\tPantalla: ");
        printf("%s\n", archivo.pantalla);
    }

    fclose(productos);

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void list_escritorio(){

    FILE *productos;
    pcEscritorio archivo;

    productos = fopen("escritorio.txt", "r");

    if(productos == NULL){
        printf("\n\n\tNo existen productos");
    } else {
        printf("\n\n\t\tPC'S disponibles: \n");
    }

    while (fread(&archivo, sizeof(pcEscritorio), 1, productos)) {
        printf("\t--------------------");
        printf("\n\tIdentificador: ");
        fflush(stdin);
        printf("%d", archivo.identificador);

        printf("\n\tMarca: ");
        fflush(stdin);
        printf("%s", archivo.marca);

        printf("\n\tModelo: ");
        fflush(stdin);
        printf("%s", archivo.modelo);

        printf("\n\tCantidad de ram: ");
        fflush(stdin);
        printf("%s", archivo.ram);

        printf("\n\tProcesador: ");
        fflush(stdin);
        printf("%s \n", archivo.procesador);

        // TECLADO

        printf("\n\tTeclado del PC: \n");

        printf("\n\tIdentificador: ");
        fflush(stdin);
        printf("%d", archivo.escritorio_teclado.identificador);

        printf("\n\tMarca: ");
        fflush(stdin);
        printf("%s", archivo.escritorio_teclado.marca);

        printf("\n\tModelo: ");
        fflush(stdin);
        printf("%s", archivo.escritorio_teclado.modelo);
        
        printf("\n\tIdioma: ");
        fflush(stdin);
        printf("%s \n", archivo.escritorio_teclado.idioma);

        // MOUSE

        printf("\n\tMouse del PC: \n");

        printf("\n\tIdentificador: ");
        fflush(stdin);
        printf("%d", archivo.escritorio_mouse.identificador);

        printf("\n\tMarca: ");
        fflush(stdin);
        printf("%s", archivo.escritorio_mouse.marca);
        
        printf("\n\tModelo: ");
        fflush(stdin);
        printf("%s \n", archivo.escritorio_mouse.modelo);

        // MONITOR

        printf("\n\tMonitor del PC: \n");

        printf("\n\tIdentificador: ");
        fflush(stdin);
        printf("%d", archivo.escritorio_monitor.identificador);

        printf("\n\tMarca: ");
        fflush(stdin);
        printf("%s", archivo.escritorio_monitor.marca);

        printf("\n\tModelo: ");
        fflush(stdin);
        printf("%s", archivo.escritorio_monitor.modelo);

        printf("\n\tTamano: ");
        fflush(stdin);
        printf("%s \n", archivo.escritorio_monitor.tamano);
    }

    fclose(productos);

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

// ELIMINAR

void elimiteclado(){

    FILE *productos, *productos1;
    teclado archivo;
    int opcion, buscador, validador = 0;

    productos = fopen("teclado.txt", "r");
    productos1 = fopen("eliminar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(teclado), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tIdioma: ");
            printf("%s\n", archivo.idioma);

            printf("\n\tSeguro que quieres eliminar este producto?\n");
            printf("\n\t1. Si");
            printf("\n\t2. No\n");

            do{
                printf("     -> ");
                fflush(stdin);
                scanf("%d", &opcion);
            }while(opcion < 1 || opcion > 2);

            if(opcion == 1){
                validador = validador + 1;
            } else {
                validador = validador + 2;
            }

        } else {
            fwrite(&archivo, sizeof(teclado), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        elimiteclado();
    } else if(validador == 1) {
        remove("teclado.txt");
        rename("eliminar.txt", "teclado.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }

}

void elimimouse(){

    FILE *productos, *productos1;
    mouse archivo;
    int opcion, buscador, validador = 0;

    productos = fopen("mouse.txt", "r");
    productos1 = fopen("eliminar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(mouse), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tSeguro que quieres eliminar este producto?\n");
            printf("\n\t1. Si");
            printf("\n\t2. No\n");

            do{
                printf("     -> ");
                fflush(stdin);
                scanf("%d", &opcion);
            }while(opcion < 1 || opcion > 2);

            if(opcion == 1){
                validador = validador + 1;
            } else {
                validador = validador + 2;
            }

        } else {
            fwrite(&archivo, sizeof(mouse), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        elimimouse();
    } else if(validador == 1) {
        remove("mouse.txt");
        rename("eliminar.txt", "mouse.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void elimimonitor(){

    FILE *productos, *productos1;
    monitor archivo;
    int opcion, buscador, validador = 0;

    productos = fopen("monitor.txt", "r");
    productos1 = fopen("eliminar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(monitor), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tTamano: ");
            printf("%s\n", archivo.tamano);

            printf("\n\tSeguro que quieres eliminar este producto?\n");
            printf("\n\t1. Si");
            printf("\n\t2. No\n");

            do{
                printf("     -> ");
                fflush(stdin);
                scanf("%d", &opcion);
            }while(opcion < 1 || opcion > 2);

            if(opcion == 1){
                validador = validador + 1;
            } else {
                validador = validador + 2;
            }

        } else {
            fwrite(&archivo, sizeof(monitor), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        elimimonitor();
    } else if(validador == 1) {
        remove("monitor.txt");
        rename("eliminar.txt", "monitor.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void eliminotebook(){

    FILE *productos, *productos1;
    notebook archivo;
    int opcion, buscador, validador = 0;

    productos = fopen("notebook.txt", "r");
    productos1 = fopen("eliminar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(notebook), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tCantidad de RAM: ");
            printf("%s\n", archivo.ram);

            printf("\n\tProcesador: ");
            printf("%s\n", archivo.procesador);

            printf("\n\tPantalla: ");
            printf("%s\n", archivo.pantalla);

            printf("\n\tSeguro que quieres eliminar este producto?\n");
            printf("\n\t1. Si");
            printf("\n\t2. No\n");

            do{
                printf("     -> ");
                fflush(stdin);
                scanf("%d", &opcion);
            }while(opcion < 1 || opcion > 2);

            if(opcion == 1){
                validador = validador + 1;
            } else {
                validador = validador + 2;
            }

        } else {
            fwrite(&archivo, sizeof(notebook), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        eliminotebook();
    } else if(validador == 1) {
        remove("notebook.txt");
        rename("eliminar.txt", "notebook.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}

void elimi_escritorio(){
    
    FILE *productos, *productos1;
    pcEscritorio archivo;
    int opcion, buscador, validador = 0;

    productos = fopen("escritorio.txt", "r");
    productos1 = fopen("eliminar.txt", "w");

    printf("\n\n\tIngrese el identificador: ");
    fflush(stdin);
    scanf("%d", &buscador);

    if(productos == NULL){
        printf("\n\tNo existe producto");
    }

    while(fread(&archivo, sizeof(pcEscritorio), 1, productos)){
        if(archivo.identificador == buscador){
            printf("\n\tMarca: ");
            printf("%s", archivo.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.modelo);

            printf("\n\tCantidad de RAM: ");
            printf("%s", archivo.ram);

            printf("\n\tProcesador: ");
            printf("%s\n", archivo.procesador);

            // TECLADO

            printf("\n\t\tTeclado del PC: \n");
            printf("\n\tMarca: ");
            printf("%s", archivo.escritorio_teclado.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.escritorio_teclado.modelo);

            printf("\n\tIdioma: ");
            printf("%s\n", archivo.escritorio_teclado.idioma);

            // MOUSE

            printf("\n\t\tMouse del PC: \n");
            printf("\n\tMarca: ");
            printf("%s", archivo.escritorio_mouse.marca);

            printf("\n\tModelo: ");
            printf("%s\n", archivo.escritorio_mouse.modelo);

            // MONITOR

            printf("\n\t\tMonitor del PC: \n");
            printf("\n\tMarca: ");
            printf("%s", archivo.escritorio_monitor.marca);

            printf("\n\tModelo: ");
            printf("%s", archivo.escritorio_monitor.modelo);

            printf("\n\tTamano: ");
            printf("%s\n", archivo.escritorio_monitor.tamano);

            printf("\n\tSeguro que quieres eliminar este producto?\n");
            printf("\n\t1. Si");
            printf("\n\t2. No\n");

            do{
                printf("     -> ");
                fflush(stdin);
                scanf("%d", &opcion);
            }while(opcion < 1 || opcion > 2);

            if(opcion == 1){
                validador = validador + 1;
            } else {
                validador = validador + 2;
            }

        } else {
            fwrite(&archivo, sizeof(pcEscritorio), 1, productos1);
        }
        
    }

    fclose(productos1);
    fclose(productos);

    if (validador == 0) {
        system("cls");
        nombre_apellido();
        printf("\n\nPRODUCTO NO ENCONTRADO: INTENTELO NUEVAMENTE");
        elimi_escritorio();
    } else if(validador == 1) {
        remove("escritorio.txt");
        rename("eliminar.txt", "escritorio.txt");
    }

    char op_menu;

    printf("\n\tPresione dos veces una misma tecla (cualquiera) para volver al menu ");
    op_menu = getch();
    if(op_menu == getch()){
        menu_principal();
    }
}
