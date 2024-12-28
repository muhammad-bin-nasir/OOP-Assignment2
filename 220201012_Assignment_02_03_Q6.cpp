#include <iostream>
using namespace std;

class Matrix
{
    int matrix[3][3];

    public:
    Matrix()
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    void setMatrixValues(int matrixArray[3][3])
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                matrix[i][j] = matrixArray[i][j];
            }
        }
    }

    void display()
    {
        for (int i=0;i<3;i++)
        {
            cout<<"[ ";
            for (int j=0;j<3;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"]"<<endl;
        }
        cout<<endl<<endl;
    }

    Matrix operator + (Matrix &M)
    {
        Matrix temp;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                temp.matrix[i][j] = matrix[i][j] + M.matrix[i][j]; 
            }
        }
        return temp;
    }

    Matrix operator - (Matrix &M)
    {
        Matrix temp;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                temp.matrix[i][j] = matrix[i][j] - M.matrix[i][j];
            }
        }
        return temp;
    }

    bool operator == (Matrix &M)
    {
        int count = 0;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                if (matrix[i][j] != M.matrix[i][j])
                {
                    count += 1;
                }
            }
        }
        if (count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

int main()
{
    Matrix m1,m2,m3,m4;
    bool temp,temp1;

    int mat[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            mat[i][j] = i*j;
        }
    }

    m1.setMatrixValues(mat);
    m2.setMatrixValues(mat);
    cout<<"Matrix 1 is:"<<endl;
    m1.display();
    cout<<"Matrix 2 is:"<<endl;
    m2.display();
    m3 = m1 + m2;
    cout<<"Matrix 3 = Matrix 1 + Matrix 2:"<<endl;
    m3.display();
    m4 = m1 - m2;
    cout<<"Matrix 4 = Matrix 1 - Matrix 2:"<<endl;
    m4.display();
    temp = m1==m2;
    temp1 = m1==m3;
    if (m1==m2)
    {
        cout<<"Matrix 1 and Matrix 2 are equal."<<endl;
    }
    else
    {
        cout<<"Matrix 1 and Matrix 2 are not equal."<<endl;
    }
    if (m1==m3)
    {
        cout<<"Matrix 1 and Matrix 3 are equal."<<endl;
    }
    else
    {
        cout<<"Matrix 1 and Matrix 3 are not equal."<<endl;
    } 

    return 0;
}