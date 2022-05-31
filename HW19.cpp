#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class TicTacToe {
private:
    int fields[9];
    int winner;
    int current_player;


    void init_fields(){

        current_player=0;

        for (int i=0;i<9;i++){
            fields[i] = i;

        }
    }

    void draw_empty_board() {
        for(int i=0;i<7;i++){
            if(i%2==0){
                cout<<"-------"<<endl;
            }else {
                cout<<"| | | |"<<endl;
            }
        }
    }

    bool is_valid_step(int cell_number){
        if ((cell_number>=9) || (cell_number<0)){
            return false;
        } else if (fields[cell_number]<0) {
            return false;
        }
        return true;
    }

    void draw_current_board() {
        int k=0;
        for(int i=0;i<7;i++){
            if(i%2==0){
                cout<<"-------"<<endl;
            } else{
                for(int j=0;j<7;j++){
                    if (j%2==0){
                        cout<<'|';
                    }else {
                        if (fields[k]==-1) {
                            cout<<'O';
                        }else if (fields[k]==-2) {
                            cout<<'X';
                        }else{
                            cout<<fields[k];
                        }

                        k+=1;
                    }
                }
                cout<<endl;
            }

        }
    }

    bool got_winner(int x_points,int o_points){
        if (x_points==3) {
            cout<<"Player 'X' won! Congratulations :)"<<endl;
            return true;
        } else if (o_points==3) {
            cout<<"Player 'O' won! Congratulations :)"<<endl;
            return true;
        }

        return false;
    }

    bool is_game_over(){

        int x_points=0,o_points=0;
        int position=0;

        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (fields[position+j]==-1){
                    o_points+=1;
                } else if (fields[position+j]==-2){
                    x_points+=1;
                }
            }

            if (got_winner(x_points,o_points)){
                return true;
            }
            x_points=0,o_points=0;
            position+=3;
        }


        x_points=0,o_points=0;
        position=0;

        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (fields[position+i]==-1){
                    o_points+=1;
                } else if (fields[position+i]==-2){
                    x_points+=1;
                }
                position+=3;
            }
            if (got_winner(x_points,o_points)){
                return true;
            }
            x_points=0,o_points=0;

            position=0;
        }

        x_points=0,o_points=0;


        for (int i=0;i<3;i++){
            if (fields[3*i+i]==-1){
                 o_points+=1;
            } else if (fields[3*i+i]==-2) {
                 x_points+=1;
            }
        }

        if (got_winner(x_points,o_points)){
            return true;
        }

        x_points=0,o_points=0;

        for (int i=1;i<4;i++){
            if (fields[3*i-i]==-1){
                 o_points+=1;
            } else if (fields[3*i-i]==-2) {
                 x_points+=1;
            }
        }

        if (got_winner(x_points,o_points)){
            return true;
        }


        return false;
    }

public:

    TicTacToe() {

        init_fields();
        draw_current_board();
    }

    bool player_step(){
        int cell_number;

        if (current_player==0){
            cout<<"Step by player 'O' "<<endl;
        } else {
             cout<<"Step by player 'X' "<<endl;
        }

        cout<<"Input the number of cell: ";
        cin>>cell_number;

        if (is_valid_step(cell_number)) {
            if (current_player==0){
                fields[cell_number] = -1;
                current_player=1;
                draw_current_board();
            } else {
                fields[cell_number] = -2;
                current_player=0;
                draw_current_board();
            }

        }else {
            cout<<"Incorrect step. Please try again."<<endl;
            player_step();
        }
    }

    bool stop_game (){
        if (is_game_over()){
            return true;
        }

        return false;
    }
};

int main(){
    TicTacToe new_game;
    while (true){
        new_game.player_step();
        if (new_game.stop_game()){
            break;
        }
    }
}
