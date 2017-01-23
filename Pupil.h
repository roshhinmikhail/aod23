#include <string>

class Pupil {
    public:
        void setName(std::string pupil_name)//��������� �����
        {
            name = pupil_name;
        }
        
        std::string getName()//��������� �����
        {
            return name;
        }
        void setSecondName(std::string pupil_second_name)//��������� �������
        {
            second_name = pupil_second_name;
        }
        std::string getSecondName()//��������� �������
        {
            return second_name;
        }
        void setScores(int pupil_scores[])//��������� ������
        {
            for (int i = 0; i < 5; ++i) {
                scores[i] = pupil_scores[i];
            }
        }
        void setMediumMark(float medium_mark)//������� ���� 
        {
            medium_mark = mark;
        }
        float getMediumMark()//��������� �������� ����� 
        {
            return medium_mark;
        }
       

    private:
        int scores[5];//������
        float medium_mark; //������� ������
        std::string name;//���
        std::string second_name;//�������
};
