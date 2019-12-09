#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int h , int m, int s);
        void setHora(int h);
        void setMinuto(int m);
        void setSegundo(int s);
        void setHorario(int h,int m, int s);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();


    private:
        int hora,minuto,segundo;
};

#endif // HORARIO_H
