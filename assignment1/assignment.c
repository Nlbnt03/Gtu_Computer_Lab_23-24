#include <stdio.h>
float	add() // Girilen iki float sayının toplamını bulan fonksiyon
{	
	float a,b;
	float result;
	
	printf("ENTER A FIRST NUMBER :");
	scanf("%f",&a);
	printf("ENTER A SECOND NUMBER :");
	scanf("%f",&b);
	
	result = a + b;
	return (result); // return kullandık çünkü bu fonksiyon geri dönüş değeri döndüren bir fonksiyondur.
			 // geri dönüşlü fonksiyon : çıktısı girdi olarak kullanılan fonksiyonlar
}
float	subtract() // Girilen iki float sayının farkını bulan fonksiyon
{
	
        float a,b;
   	float result;
        
	printf("ENTER A FIRST NUMBER :");
        scanf("%f",&a);
        printf("ENTER A SECOND NUMBER :");
        scanf("%f",&b);
	
	result = a - b;
       	return (result);	
}
float	multiply() // Girilen iki sayının çarpımını veren fonksiyon
{
        float a,b;
        float result;
        
	printf("ENTER A FIRST NUMBER :");
        scanf("%f",&a);
        printf("ENTER A SECOND NUMBER :");
        scanf("%f",&b);
	
	result = a * b;
	return (result);
}
float	divide() // Girilen iki sayıyın birbirine bölümünü hesaplayan fonksiyon
{
	float a,b;
        float result;
        
	printf("ENTER A FIRST NUMBER :");
        scanf("%f",&a);
        printf("ENTER A SECOND NUMBER :");
        scanf("%f",&b);
	
	if (b != 0) // payda sıfır(0) olursa tanımsız olacağı için bunun kontrolünü yaptık
	{
		result = a / b;
		return (result);
	}
	else
	{
		return (0);
	}
}
float	my_pow() // üs alma işlemi yapan fonksiyon
{
	float a;
	int b;
	float result = 1; // sonucu 1 den başlattım çünkü 1 çarpmada etkisiz eleman
	
	printf("ENTER A taban NUMBER :");
        scanf("%f",&a);
        printf("ENTER A üs NUMBER :");
        scanf("%d",&b);
	
	while (b > 0) // üsttümüz sıfır(0) olana kadar sayımızı kendi ile çarpıcaz
	{
		result = result * a;
		b--; // üst değişkenini her işlem sonunda 1 azalttık
	}
	
	return (result);
}
float	average()
{
	int controller = 1; 
	float i = 1; // terim sayısı olarak kullandım
	float a;
	float sum = 0;
	float result = 0;
	
	while (controller) // buraya controller koydum ve ilk değerini 1 atadım ki kullanıcıdan belli bir karakter girilene kadar değer almaya devam etsin.
	{	
			printf("%.0f. SAYIYI GIRINIZ : ", i);
                        scanf("%f", &a);
			if (getchar() == 'q')
			{
				controller = 0; // 'q' karakteri girildiği zaman controller değişkenini sıfır(0) yaptık ki daha while döngüsünü durdurup input almasın.
				break;
			}
                        sum += a;
                        i++;
	}
	
	result = sum / (i-1);
	return (result);

}
float max_variable() // Kullanıcıdan girilen inputlar arasında max değeri bulan fonksiyon
{
	float result,a,max;
	int controller;
	int i = 1; // i'yi ilk sayının girilmesi kontrolü ve input alma işleminde kullandım.
	
	while (controller) // buraya controller koydum ve ilk değerini 1 atadım ki kullanıcıdan belli bir karakter girilene kadar değer almaya devam etsin.
	{
		printf("%d. sayiyi giriniz : ",i);
		scanf("%f",&a);
		if(getchar() == 'q')
		{
			controller = 0;	// 'q' karakteri girildiği zaman controller değişkenini sıfır(0) yaptık ki daha while döngüsünü durdurup input almasın.
			break;
		}
		else if (i == 1) // bu else if bloğunda eğer ilk sayıyı giriyorsam zaten o ana kadar girilmiş max sayı o olur mantığından max = a yaptım
		{
			max = a;
			i++;
		}
		else
		{
			if(a >= max) //bu if bloğunda girilen inputu en sonki max değer ile kıyasladım ve girilen input max değerden büyük veya eşit ise max değeri değiştirdim
			{
				max = a;
			}
			i++;
		}

	}
	
	result = max;
	return (result);
		
}

int main(void)
{
	int choice; // tercih değişkeni kullanıcın tercihine göre switch yapısında case seçecek
	float result; // yazılan fonksiyonlar geri dönüşlü fonksiyon olduğu için çıktılarını result değişkenine girdi olarak verecem.
	int controller = 1; // menünün akışını kontrol etmek için controller kullandım 1 ve 0 değerlerini alır 

	while (controller)
	{
		printf("%%%% WELCOME TO GTU CALCULATOR MACHINE %%%%\n");
        	printf("%%%% STUDENT NAME : YUSUF EREN NALBANT %%%%\n");
        	printf("%%%% PLEASE SELECT FROM THE FOLLOWİNG  %%%%\n");
        	printf("%%%% MENU :                            %%%%\n");
        	printf("(1) ADD TWO NUMBERS\n");
        	printf("(2) SUBTRACT TWO NUMBERS\n");
        	printf("(3) MULTIPLY TWO NUMBERS\n");
        	printf("(4) DIVIDE TWO NUMBERS\n");
        	printf("(5) TAKE THE NTH POWER OF A NUMBER\n");
        	printf("(6) FIND AVERAGE OF NUMBERS INPUTTED\n");
		printf("(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n");
        	printf("(0) EXIT\n");
        	printf("PLEASE SELECT : ");
        	scanf("%d",&choice); // kullanıcından işlem için input alındı

        	switch (choice)
        	{
                	case 1: // choice 1 ise bu blok çalışacak
                        	result = add(); // add() fonksiyonu geri dönüşlü olduğu için çıktısını girdi olarak kullandım
                        	printf("RESULT = %.2f\n",result); // .2f syntaxı floatlı sayıda noktadan sonra 2 basamak göstermek için kullanıldı.
				printf("--------------------------------\n");
				break;
                	case 2:
                        	result = subtract();
                                printf("RESULT = %.2f\n",result);
				printf("--------------------------------\n");
                                break;
                	case 3:
                        	result = multiply();
                                printf("RESULT = %.2f\n",result);
                                printf("--------------------------------\n");
				break;
                	case 4:
                        	result = divide();
                                printf("RESULT = %.2f\n",result);
                                printf("--------------------------------\n");
				break;
                	case 5:
                        	result = my_pow();
                                printf("RESULT = %.2f\n",result);
                                printf("--------------------------------\n");
				break;
                	case 6:
				result = average();
                                printf("RESULT = %.2f\n",result);
                                printf("--------------------------------\n");
                                break;
			case 7:
				result = max_variable();
                                printf("RESULT = %.2f\n",result);
                                printf("--------------------------------\n");
                                break;
                	case 0: // kullanıcı 0 değerini girer ise program akışı durucak
                        	printf("EXITING...\n");
				controller = 0; // while döngüsünü durdurmak için
                        	break;
                	default: // bu blok choice değeri {1,2,3,4,5,6,7,0} kümesinin elemanı değilse bu blok çalışacak 
                        	printf("PLEASE SELECT TRUE CHOICE !\n");
				printf("--------------------------------\n");
        	}
	}	

}
