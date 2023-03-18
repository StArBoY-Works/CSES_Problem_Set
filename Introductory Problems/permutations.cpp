/*  
      *******                                        *                                  
    *       ***      *                             **                                   
   *         **     **                             **                                   
   **        *      **                             **                                   
    ***           ********            ***  ****    **            ****    **   ****      
   ** ***        ********     ****     **** **** * ** ****      * ***  *  **    ***  *  
    *** ***         **       * ***  *   **   ****  *** ***  *  *   ****   **     ****   
      *** ***       **      *   ****    **         **   ****  **    **    **      **    
        *** ***     **     **    **     **         **    **   **    **    **      **    
          ** ***    **     **    **     **         **    **   **    **    **      **    
           ** **    **     **    **     **         **    **   **    **    **      **    
            * *     **     **    **     **         **    **   **    **    **      **    
  ***        *      **     **    **     ***        **    **    ******      *********    
 *  *********        **     ***** **     ***        *****       ****         **** ***   
*     *****                  ***   **                ***                           ***  
*                                                                           *****   *** 
 **                                                                       ********  **  
                                                                          *      ****    
               _oo0oo_                                                                                                                   
              o8888888o 
              88" . "88 
              (| -_- |) 
              0\  =  /0 
            ___/`---'\___ 
          .' \\|     |// '. 
         / \\|||  :  |||// \ 
        / _||||| -:- |||||- \ 
       |   | \\\  -  /// |   | 
       | \_|  ''\---/''  |_/ | 
       \  .-\__  '-'  ___/-. / 
     ___'. .'  /--.--\  `. .'___ 
  ."" '<  `.___\_<|>_/___.' >' "". 
 | | :  `- \`.;`\ _ /`;.`/ - ` : | | 
 \  \ `_.   \_ __\ /__ _/   .-` /  / 
=====`-.____`.___ \_____/___.-`___.-'===== 
               `=---=' 
*/

/*
WRITTEN BY :-
   **        
     *****        
    *  ***        
       ***        
      *  **       
      *  **       
     *    **      
     *    **      
    *      **     
    *********     
   *        **    
   *        **    
  *****      **   
 *   ****    ** * MEYA CHAVAN
*     **      **  
*                 
 ** 
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define endl "\n";
#define debug(x) cout<< #x <<" "<< x <<endl;

void permutations(int num);

int32_t main()
{
    int n;
    cin>>n;
    permutations(n);
    return 0;
}

void permutations(int num)
{
    vector<ll> arr;
    if(num == 1)
    {
        cout<<1;
        return;
    }
    if(num < 4)
    {
        cout<<"NO SOLUTION";
        return;
    }
    if(num == 4)
    {
        for(int i = 1; i < num; i+=2)
        {
            arr.push_back(i + 1);
        }
        for(int i = 1; i < num; i+=2)
        {
            arr.push_back(i);
        }
    }
    else
    {
        if(num & 1)
        {
            for(int i = 1; i < num; i+=2)
            {
                arr.push_back(i + 1);
            }
            for(int i = 1; i <= num; i+=2)
            {
                arr.push_back(i);
            }
        }
        else
        {
            for(int i = 1; i < num; i+=2)
            {
                arr.push_back(i + 1);
            }
            for(int i = 1; i < num; i+=2)
            {
                arr.push_back(i);
            }
        }
    }
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}