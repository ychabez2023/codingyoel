#include<iostream>
#include<windows.h>
#include<string.h>
#include<cctype>
#include<cstdlib>

using namespace std;

const char g_szClassName[] = "Valores Enteros";
int msg,hwnd;

int main()
{ 
	switch(msg)
	{
		case WM_CLOSE:
			destroywindow(hwnd);
		break;
		
		case WM_Destroy:
			postquitmessage(0);
		break;
		
		default:
			return Defwindowproc(hwnd,msg,wParam,lParam);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCdmline,int nCmdshow)

{
	WINDCLASSEX wc;
	HWND hwnd;
	MSG Msg;
	
	wb.cbsize			= sizeof(WINDCLASSEX);
	wc.style 			= 0;
	wc.lpfnWndProc		= WndProc;
	wc.cbClsExtra		= 0;
	wc.cbWndExtra		= 0;
	wc.hInstance		= hInstance;
	wc.hIcon			= LoadIcon(Null, IDI_APPLICATION);
	wc.hCursor			= LoadCursor(Null,IDC_ARROW);
	wc.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszMenuname		= NULL;
	wc.lpszClassname	= g_szClassname;
	wc.hIconSm			= LoadIcon(Null, IDI_APPLICATION);
	
	if(!RegisterClassEx(&wc))
	{
		Messagebox(NULL,"Window Registration Failed!","Error!",MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}
	
	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,g_szClassName,"Valores Enteros",WS_OVERLAPPEWINDOW,CW_USEDEFAULT,240,120,NULL,NULL,hInstance,NULL);
	
	if(hwnd == NULL)
	{
		MessageBox(NULL,"Window Creation Failed!","Error!",MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}
	
	ShowWindow(hwnd,nCmdshow);
	UpdateWindow(hwnd);
	
	While(GetMessage(&Msg,NULL,0,0) > 0)
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}
	return Msg.wParam;
}

bool entero(string);

int main(){
	string seccion;
	int numero;
	bool repite = true;
	
	do{
		cout<<"Ingrese un valor: ";
		getline(cin,seccion);
		
		if (entero(seccion)){
			repite = false;
		}else{
			cout<< "No es un valor entero, Intentelo otra vez"<<endl;
			}
	}while(repite);
	
	numero = atoi(seccion.c_str());
	
	cout<< "El numero ingresado es: "<<numero<<endl;
	cin.get();
	return 0;
}

bool entero(string seccion){
	bool entero = true;
	int longitud = seccion.size();
	
	if(longitud == 0){
		entero = false;
	}else if (longitud == 1&& !isdigit(seccion[0])){
		entero = false;
	}else{
		int indice = 0;
		if (seccion[0]== '+' || seccion[0]== '-'){
			indice = 1;
		}else{
			indice = 0;
		}
		
		while(indice < longitud){
			if(!isdigit(seccion[indice])){
				entero = false;
				break;
			}
			indice++;
		}
	}
	
	return entero;
}



