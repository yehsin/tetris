#include<iostream>
#include<fstream>
using namespace std;

class block;
class board;
int leng;
int weng;

typedef struct atom{
    int row;
    int col;
}atom;

class block{
    private:
    int row;
    atom *B;

    public:
    block(char shape,char direction,int s){
        int p=s-1;
        B = new atom[4];
        switch (shape)
        {
            case 84:
                switch(direction){
                    case 49://T1
                        B[0].col=p+1;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 50://T2
                        B[0].col=p+1;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    case 51://T3
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+2;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row;
                        B[2].row=B[0].row;
                        B[3].row=B[0].row+1;
                        break;
                    case 52://T4
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                }
                break;
                
            case 76:
                switch(direction){
                    case 49://L1
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+0;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    case 50://L2
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 51://L3
                        B[0].col=p+1;
                        B[1].col=p+1;
                        B[2].col=p+0;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+2;
                        B[3].row=B[0].row+2;
                        break;
                    case 52://L4
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+2;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+0;
                        B[3].row=B[0].row+1;
                        break;
                }
                break;
            case 74:
                switch(direction){
                    case 49://J1
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+1;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    case 50://J2
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+2;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+0;
                        B[3].row=B[0].row+1;
                        break;
                    case 51://J3
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+0;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+2;
                        B[3].row=B[0].row+2;
                        break;
                    case 52://J4
                        B[0].col=p+2;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;   
                }
                break;
                
            case 83:
                switch(direction){
                    case 49://S1
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+1;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 50://S2
                        B[0].col=p+1;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    
                }
                break;
            case 90:
                switch(direction){
                    case 49://Z1
                        B[0].col=p+1;
                        B[1].col=p+2;
                        B[2].col=p+0;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 50://Z2
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                }
                break;
            case 73:
                switch(direction){
                    case 49://I1
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+0;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+2;
                        B[3].row=B[0].row+3;
                        break;
                    case 50://I2
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+2;
                        B[3].col=p+3;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+0;
                        B[3].row=B[0].row+0;
                        break;

                }
                break;
                
            case 79://O
                B[0].col=p+0;
                B[1].col=p+1;
                B[2].col=p+0;
                B[3].col=p+1;

                B[0].row=leng;
                B[1].row=B[0].row+0;
                B[2].row=B[0].row+1;
                B[3].row=B[0].row+1;
                break;
        }
    }
    ~block(){
        delete B;
    }
    int getcol(int a){ //choose which bolck
        return B[a].col;
    }
    int getrow(int a){ 
        return B[a].row;
    }  
};

class board{
    private:
    int length,wength;
    int count=0;
    bool broke=0;
    public:
    int **col;//memorize colume
    int *row;//memorize which row have total block
    int *flag; //mamorize the highest block in it's colume
    int *full;//mamorize which colume have total block
    board(int length=0,int wength=0):length(length),wength(wength){
        full = new int[wength];
        flag = new int[wength];
        row = new int[length];
        col = new int*[wength];
        for(int i=0;i<wength;i++){
            col[i] = new int[length]{0};
            flag[i]=-1;
            full[i]=0;
        }
        for(int j=0;j<length;j++){
            row[j]=0;
        }
    }
    ~board(){
        delete full;
        delete flag;
        delete row;
        delete col;
    }

    board *add(block *c){
        int distance=length; 
        int pre_status=-8; 
        for(int i=0;i<4;i++){
            if(pre_status!=c->getrow(i)&&broke==1){
                break;
            }
            int block_col=c->getcol(i);
            int tmp_distance=c->getrow(i)-flag[block_col]-1;
            if(tmp_distance<distance){
                distance=tmp_distance;
            }
        }
        //calculate each block's distance between highest 1 in itself column

        for(int i=0;i<4;i++){
            if(pre_status!=c->getrow(i)&&broke==1){
                break;
            }
            int need_to_move=c->getrow(i)-distance;//memorize where this block should be 
            int block_col=c->getcol(i);
            col[block_col][need_to_move]=1;
            full[block_col]++;
            row[need_to_move]++;
            flag[block_col]=need_to_move;
            if(row[need_to_move]==wength){ //when erasing
                for(int j=0;j<wength;j++){
                    this->erase(need_to_move,col[j]);

                    /* */
                    col[j][flag[j]]=0; 
                    if(need_to_move!=flag[j]){
                        col[j][need_to_move]=1;
                    }
                    /*When we erase block, we mean that the highest block move to the block which is erased*/
                    /*And if we erase block is the highest we do nothing*/ 

                    full[j]--;
                    int tmp_row=flag[j];
                    while(col[j][flag[j]]==0 && tmp_row>=0){
                        flag[j]--;
                        tmp_row--;
                    } //to get the highest block position                 
                }
                distance++;/*because we erase a block, others blocks which are in the same column whose distance
                must be increased.*/
                for(int o=need_to_move;o<length-1;o++){
                    row[o]=row[o+1]; //change each row information to it's below row.
                }
                row[length-1]=0;//Anyway, top will be 0.
            }
            else{
                if(full[block_col]>length){ //爆掉
                    broke=1;
                }
            }
        }
        //get the shortest and move down

        return this;
    }

    board *erase(int b,int *s){
        s[b]=0;
        return this;
    }
    bool is_broke(){ //判斷gameover
        if(broke==0){
            return false;
        }
        else{
            return true;
        }

    }
   
    void print(){
        ofstream ofile("Tetris.output",ios::out);
        for(int j=length-1;j>=0;j--){
            for(int i=0;i<wength;i++){
                ofile<<this->col[i][j];
                //cout<<this->col[i][j]<<"\t";
            }
            ofile<<endl;
            //cout<<endl;
        }
        ofile.close();
    }
};

int str_to_int(const char *s){ //change number size
    int temp=0;
    while(*s){
        if((*s<'0')||(*s>'9')){
            break;
        }
        temp=temp*10+(*s-'0');
        s++;
    }
    return temp;
}

int main(){
    char input1[3],input2[3];
    ifstream ifile("Tetris.data",ios::in);
    ifile.getline(input1,3,' ');
    ifile.getline(input2,3,'\n');
    leng=str_to_int(input1);
    weng=str_to_int(input2);
    board *map = new board(leng,weng);
    while(!ifile.eof()){
        char input3[4];
        ifile.getline(input3,4,' '); //input shape
        if(input3[0]==69){ //when we get 'End', we need to gameover.
            break;
        }
        char input4[3];
        ifile.getline(input4,3,'\n'); //input shape's form
        int point =str_to_int(input4);
        block *a=new block(input3[0],input3[1],point);
        map=map->add(a);
        delete a;
        if(map->is_broke()){
            break;
        }
        
    }
    map->print();
    ifile.close();
    delete map;
    return 0;
}