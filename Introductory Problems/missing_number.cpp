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

void missing_number(ll num);

int32_t main()
{
    ll n;
    cin>>n;
    missing_number(n);
    return 0;
}

void missing_number(ll num)
{
    vector<ll> arr(num);
    ll arr_sum = 0;
    ll max_sum = (num * (num + 1) / 2);
    for(int i = 0; i < num - 1; i++)
    {
        cin>>arr[i];
        arr_sum += arr[i];
    }
    cout<<max_sum - arr_sum;
}