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
                    case 49:
                        B[0].col=p+1;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 50:
                        B[0].col=p+1;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    case 51:
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+2;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row;
                        B[2].row=B[0].row;
                        B[3].row=B[0].row+1;
                        break;
                    case 52:
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+0;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                }
                break;
                
            case 76:
                switch(direction){
                    case 49:
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+0;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    case 50:
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+1;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 51:
                        B[0].col=p+1;
                        B[1].col=p+1;
                        B[2].col=p+0;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+2;
                        B[3].row=B[0].row+2;
                        break;
                    case 52:
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
                    case 49:
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+1;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+2;
                        break;
                    case 50:
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+2;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+0;
                        B[3].row=B[0].row+1;
                        break;
                    case 51:
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+0;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+2;
                        B[3].row=B[0].row+2;
                        break;
                    case 52:
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
                    case 49:
                        B[0].col=p+0;
                        B[1].col=p+1;
                        B[2].col=p+1;
                        B[3].col=p+2;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 50:
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
                    case 49:
                        B[0].col=p+1;
                        B[1].col=p+2;
                        B[2].col=p+0;
                        B[3].col=p+1;

                        B[0].row=leng;
                        B[1].row=B[0].row+0;
                        B[2].row=B[0].row+1;
                        B[3].row=B[0].row+1;
                        break;
                    case 52:
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
                    case 49:
                        B[0].col=p+0;
                        B[1].col=p+0;
                        B[2].col=p+0;
                        B[3].col=p+0;

                        B[0].row=leng;
                        B[1].row=B[0].row+1;
                        B[2].row=B[0].row+2;
                        B[3].row=B[0].row+3;
                        break;
                    case 50:
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
                
            case 79:
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
        //cout<<"kk"<<endl;
        delete B;
    }
    int getcol(int a){ //choose which bolck
        return B[a].col;
    }
    int getrow(int a){ 
        return B[a].row;
    }
    bool isover(){
        int status=0;
        for(int i=0;i<4;i++){
            if(B[i].col>weng){
                status=1;
                cout<<"oo"<<endl;
                break;
            }
        }
        if(status==0){
            return false;
        }
        else{
            return true;
        }
    }
    
};

class board{
    private:
    friend block;
    int length,wength;
    int virtual_length; //over length
    int count=0;
    bool broke=0;
    public:
    int **col;
    int *row;//紀錄橫列是否滿
    int *flag; //紀錄第幾行最高點
    int *full;//紀錄直行是否為滿
    board(int length=0,int wength=0)
    :length(length),wength(wength),virtual_length(length+4){
            cout<<wength<<endl;
            full = new int[wength];
            flag = new int[wength]{0};
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
        //cout<<"p2"<<endl;
        delete full;
        delete flag;
        delete row;
        delete col;
    }

    board *add(block *c){
        //cout<<"p3"<<endl;
        int distance=length;
        int pre_status=-8;
        for(int i=0;i<4;i++){
            if(pre_status!=c->getrow(i)&&broke==1){
                break;
            }
            cout<<i<<endl;
            int block_col=c->getcol(i);
            cout<<"block_col="<<block_col<<" ";
            cout<<"row="<<c->getrow(i)<<" ";
            cout<<"flag="<<flag[block_col]<<endl;
            int tmp_distance=c->getrow(i)-flag[block_col]-1;
            if(tmp_distance<distance){
                //cout<<"tmp="<<tmp_distance<<endl;
                distance=tmp_distance;
            }
        }
        //calculate each block's distance between highest 1 in itself column
        cout<<endl;
        cout<<"distance="<<distance<<endl;
        for(int i=0;i<4;i++){
            if(pre_status!=c->getrow(i)&&broke==1){
                break;
            }
            //cout<<"c->getrow(i)="<<c->getrow(i)<<endl;
            int need_to_move=c->getrow(i)-distance;//應該擺在第幾列
            cout<<"need_to_move="<<need_to_move<<" ";
            int block_col=c->getcol(i);
            cout<<"block_col="<<block_col<<" ";
            col[block_col][need_to_move]=1;
            full[block_col]++;
            cout<<"full="<<full[block_col]<<" ";
            row[need_to_move]++;
            cout<<"rowarr="<<row[need_to_move]<<" ";
            flag[block_col]=need_to_move;
            cout<<endl;
            cout<<"full="<<full[block_col]<<"row="<<row[need_to_move]<<endl;
            
            if(row[need_to_move]==wength){ //&& full[block_col]!=length){ //橫
                cout<<"enter erase2"<<endl;
                cout<<"row[b]="<<row[2]<<endl;
                for(int j=0;j<wength;j++){
                    this->erase2(need_to_move,col[j]);

                    col[j][flag[j]]=0;
                    if(need_to_move!=flag[j]){
                        col[j][need_to_move]=1;
                    }

                    full[j]--;
                    flag[j]--;
                }
                distance++;
                for(int o=need_to_move;o<length-1;o++){
                    row[o]=row[o+1];
                }
                row[length-1]=0;
            }
            else{
                if(full[block_col]>length){ //爆掉
                    broke=1;
                }
            }
        }
        //get the shortest and move down
        //原來的高度加上方塊的高度
        //if(如果可以消) erase()
        return this;

    }

    board *erase2(int b,int *s){
        cout<<"erase2:"<<s[b];
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
   /* bool is_len_full(){
        int status=0;
        for (int j=0;j<length;j++){
            if(this->row[j]>wength){
                status=1;
                break;
            }
        }
        if(status==0){
            return false;
        }
        else{
            return true;
        }
    }*/
        
    void print(){
        cout<<length<<" "<<wength<<endl;
        for(int j=length-1;j>=0;j--){
            for(int i=0;i<wength;i++){
                cout<<this->col[i][j]<<'\t';
            }
            cout<<endl;
        }
    }
};

int str_to_int(const char *s){
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
    ifstream ifile("tetris.data.txt",ios::in);
    ifile.getline(input1,3,' ');
    ifile.getline(input2,3,'\n');
    leng=str_to_int(input1);
    weng=str_to_int(input2);
    cout<<leng<<endl;
    cout<<weng<<endl;
    board *map = new board(leng,weng);
    while(!ifile.eof()){
        char input3[4];
        ifile.getline(input3,4,' ');
        if(input3[0]==69){
            break;
        }
        char input4[3];
        ifile.getline(input4,3,'\n');
        int point =str_to_int(input4);
        block *a=new block(input3[0],input3[1],point);
        if(a->isover()){
            cout<<"oo"<<endl;
        }
        map=map->add(a);
        if(map->is_broke()){
            break;
        }
        delete a;
    }
    map->print();
    return 0;
}