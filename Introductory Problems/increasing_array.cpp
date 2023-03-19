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

void increasing_array(int num);

int32_t main()
{
  int n;
  cin>>n;
  increasing_array(n);
  return 0;
}

void increasing_array(int num)
{
  vector<ll> arr(num);
  for(int i = 0; i < num; i++)
  {
    cin>>arr[i];
  }

  ll count = 0;

  for(int i = 0; i < arr.size() - 1; i++)
  {
    if(arr[i] >= arr[i + 1])
    {
      count += arr[i] - arr[i + 1];
      arr[i + 1] = arr[i];
    }
  }
  cout<<count;
}