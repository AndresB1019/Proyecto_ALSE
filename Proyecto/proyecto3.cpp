#include "proyecto3.h"
#include "ui_proyecto3.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

double valores[8];
int pbvel=0,pbfrec=0,pbvol=0,pbtemp=0;
double vel=1800,frec=60,volt=120,temp=40;
int Tv=0,Tf=3,Tvolt=0,Tt=0;
int pid;
long int carne;
char *arg[3],process_c[14]={"./conexion.c"};
char id[10]={0};

Proyecto3::Proyecto3(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Proyecto3)
{
    ui->setupUi(this);
    ui->label_3->close();
    ui->label_4->close();
    ui->label_5->close();
    ui->label_6->close();
    ui->label_7->close();
    ui->label_8->close();
    ui->label_9->close();
    ui->label_10->close();
    ui->label_11->close();
    ui->label_12->close();
    ui->label_13->close();
    ui->label_14->close();
    ui->label_15->close();
    ui->PBvel->close();
    ui->PBvol->close();
    ui->PBfrec->close();
    ui->PBtemp->close();
    ui->LTv->close();
    ui->LTf->close();
    ui->LTvolt->close();
    ui->LTt->close();
    ui->LTv_2->close();
    ui->LTf_2->close();
    ui->LTvolt_2->close();
    ui->LTt_2->close();
    ui->Lvel->close();
    ui->Lfrec->close();
    ui->Lvolt->close();
    ui->Ltemp->close();
    ui->Ltiemp->close();

}

Proyecto3::~Proyecto3()
{
    delete ui;
}

void Proyecto3::on_Btnenviar_clicked()
{

    QString codigo;
    codigo=ui->LEcarne->text();
    carne=codigo.toInt();

    for(int i=0;i<8;i++)
    {
        std::string cStd = codigo.toStdString();
        id[i]=cStd[i];
    }

    if(carne != 0 && carne > 2000000)
    {
       pid = fork();
       if (pid==0)
       {
                    arg[0]=process_c;
                    arg[1]=id;
                    arg[2]= NULL;
                    execv("/home/alse/Documents/Proyecto_ALSE/conexion.bin",arg);
       }

       ui->label_3->show();
       ui->label_4->show();
       ui->label_5->show();
       ui->label_6->show();
       ui->label_7->show();
       ui->label_8->show();
       ui->label_9->show();
       ui->label_10->show();
       ui->label_11->show();
       ui->PBvel->show();
       ui->PBvol->show();
       ui->PBfrec->show();
       ui->PBtemp->show();
       ui->LTv->show();
       ui->LTf->show();
       ui->LTvolt->show();
       ui->LTt->show();
       ui->LTv_2->show();
       ui->LTf_2->show();
       ui->LTvolt_2->show();
       ui->LTt_2->show();
       ui->Lvel->show();
       ui->Lfrec->show();
       ui->Lvolt->show();
       ui->Ltemp->show();
       ui->Ltiemp->show();
       ui->Lerror->setText("Datos Recibidos por favor actulice los datos");
       ui->Lerror->show();
       ui->Lerror->setEnabled(1);
       ui->label_12->close();
       ui->label_13->close();
       ui->label_14->close();
       ui->label_15->close();
       ui->PBvol->setValue(0);
       ui->PBfrec->setValue(0);
       ui->PBvel->setValue(0);
       ui->PBtemp->setValue(0);
      }
}

void Proyecto3::on_Btnactu_clicked()
{

    FILE *fd_arch;
    char *buffer;
    int tam_arch,w=0;
    fd_arch=fopen("/home/alse/Documents/Proyecto_ALSE/datos.txt","r");
    if(fd_arch==NULL)
    {
      ui->Lerror->setText("Error al abrir el archivo");
      ui->Lerror->show();
    }

    fseek(fd_arch,0,SEEK_END);
    tam_arch=ftell(fd_arch);
    buffer=(char*)malloc(tam_arch*sizeof(char));
    rewind(fd_arch);
    fread(buffer,1,tam_arch,fd_arch);
    fclose(fd_arch);

    //se realiza el proceso para extraer los datos de .txt
    char info[tam_arch];
    int x=0;
    for(int i=0;i<tam_arch;i++)
    {
        if(buffer[i]!=' ' && buffer[i]!='\0')
        {
            info[w]=buffer[i];
            w++;
        }
        if(buffer[i]==' ' || buffer[i]=='\0')
        {
            valores[x]=atof(info);
            w=0;
            x++;
            info[0]='\0';
        }
    }

    for(int i=0;i<tam_arch;i++)
    {
        if(buffer[i]!=' ' && buffer[i]!='\0')
        {
            info[w]=buffer[i];
            w++;
        }
        if(buffer[i]==' ' || buffer[i]=='\0')
        {
            i=tam_arch+12;
        }
    }

    if (valores[1]==0 && valores[2]==0 && valores[3]==0 && valores[4]==0)
    {
        ui->Lerror->setText("Error al leer el archivo o Usuario no encontrado");
    }
    char Tv1[3],Tt1[2],Tvol1[2];
    Tv1[0]=info[2];
    Tv1[1]=info[3];
    Tt1[0]=info[7];
    Tvol1[0]=info[5];
    Tv = atoi(Tv1);
    Tt = atoi(Tt1);
    Tvolt = atoi(Tvol1);

    time_t rawtime=valores[5]/1000;
    struct tm ts;
    char buf[80];
    ts=*localtime(&rawtime);
    strftime(buf, sizeof(buf),"%a %Y-%m-%d %H:%M:%S %Z",&ts);

    pbvel=(100*valores[1]/vel);
    pbfrec=(100*valores[2]/frec);
    pbvol=(100*valores[3]/volt);
    pbtemp=(100*valores[4]/temp);

    ui->Ltiemp->setText(buf);
    ui->Lerror->setText(" ");

    ui->LTv->setText(QString::number(Tv));
    ui->LTf->setText(QString::number(Tf));
    ui->LTvolt->setText(QString::number(Tvolt));
    ui->LTt->setText(QString::number(Tt));

    ui->Lvel->setText(QString::number(valores[1]));
    ui->Lfrec->setText(QString::number(valores[2]));
    ui->Lvolt->setText(QString::number(valores[3]));
    ui->Ltemp->setText(QString::number(valores[4]));
    ui->Btncarga->click();

}




void Proyecto3::on_Btncarga_clicked()
{
    if (valores[1]<(vel-Tv) || valores[1]>(vel+Tv))
     {
        ui->label_12->show();
        ui->PBvel->close();
     }else
     {
        ui->label_12->close();
        ui->PBvel->show();
        ui->PBvel->setValue(pbvel);
     }

    if (valores[2]<(frec-Tf) || valores[2]>(frec+Tf))
     {
        ui->label_13->show();
        ui->PBfrec->close();
     }else
     {
        ui->label_13->close();
        ui->PBfrec->show();
        ui->PBfrec->setValue(pbfrec);
     }

    if (valores[3]<(volt-Tvolt) || valores[3]>(volt+Tvolt))
     {
        ui->label_14->show();
        ui->PBvol->close();
     }else
     {
        ui->label_14->close();
        ui->PBvol->show();
        ui->PBvol->setValue(pbvol);
     }

    if (valores[4]<(temp-Tt) || valores[4]>(temp+Tt))
     {
        ui->label_15->show();
        ui->PBtemp->close();
     }else
     {
        ui->label_15->close();
        ui->PBtemp->show();
        ui->PBtemp->setValue(pbtemp);
     }
    pid = fork();
    if (pid==0)
    {
                 arg[0]=process_c;
                 arg[1]=id;
                 arg[2]= NULL;
                 execv("/home/alse/Documents/Proyecto_ALSE/conexion.bin",arg);
    }
}
