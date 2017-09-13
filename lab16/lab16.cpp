//Created By: John Sannar
//Created On: 9/9/2016 
//A calculator for yogurt and its costs.

 #include <iostream>
 using namespace std;
 
 struct stockPortfolio { 
  string stockName = "";
  string sector = "";
  int numberOfShares = 0;
  double currentSharePrice = 0.0;
  double totalValue = 0.0;
 };
 
 int main()
 {
   stockPortfolio stockPortfolioA;
   
   stockPortfolioA.stockName = "FordM";
   stockPortfolioA.sector = "A";
   stockPortfolioA.numberOfShares = 0;
   stockPortfolioA.currentSharePrice = 0.0;
   stockPortfolioA.totalValue = 0.0;
   
         cout << "Please enter the First stock Name: " << endl;
            cin >> stockPortfolioA.stockName; 
            
        cout << "Please enter the  sector: " << endl;
            
            cin >> stockPortfolioA.sector;
            
        cout << "Please enter the current Share Price: " << endl;
        
            cin >> stockPortfolioA.currentSharePrice;
            
        cout << "Please enter the number of shares: " << endl;
        
            cin >> stockPortfolioA.numberOfShares;
   
 stockPortfolio stockPortfolioB;
   
   stockPortfolioB.stockName = "Albertsn";
   stockPortfolioB.sector = "C";
   stockPortfolioB.numberOfShares = 0;
   stockPortfolioB.currentSharePrice = 0.0;
   stockPortfolioB.totalValue = 0.0;
   
   cout << "Please enter the second stock Name: " << endl;
            cin >> stockPortfolioB.stockName; 
            
        cout << "Please enter the sector: " << endl;
            
            cin >> stockPortfolioB.sector;
            
        cout << "Please enter the current Share Price: " << endl;
        
            cin >> stockPortfolioB.currentSharePrice;
            
        cout << "Please enter the number of shares: " << endl;
        
            cin >> stockPortfolioB.numberOfShares;
        
   
   stockPortfolio stockPortfolioC;
   
   stockPortfolioC.stockName = "Albertsn";
   stockPortfolioC.sector = "C";
   stockPortfolioC.numberOfShares = 0;
   stockPortfolioC.currentSharePrice = 0.0;
   stockPortfolioC.totalValue = 0.0;

       cout << "Please enter the third stock Name: " << endl;
            cin >> stockPortfolioC.stockName; 
            
        cout << "Please enter the sector: " << endl;
            
            cin >> stockPortfolioC.sector;
            
        cout << "Please enter the current Share Price: " << endl;
        
            cin >> stockPortfolioC.currentSharePrice;
            
        cout << "Please enter the number of shares: " << endl;
        
            cin >> stockPortfolioC.numberOfShares;
            
    stockPortfolio stockPortfolioD;
   
   stockPortfolioD.stockName = "Albertsn";
   stockPortfolioD.sector = "C";
   stockPortfolioD.numberOfShares = 0;
   stockPortfolioD.currentSharePrice = 0.0;
   stockPortfolioD.totalValue = 0.0;

       cout << "Please enter the fourth stock Name: " << endl;
            cin >> stockPortfolioD.stockName; 
            
        cout << "Please enter the sector: " << endl;
            
            cin >> stockPortfolioD.sector;
            
        cout << "Please enter the current Share Price: " << endl;
        
            cin >> stockPortfolioD.currentSharePrice;
            
        cout << "Please enter the number of shares: " << endl;
        
            cin >> stockPortfolioD.numberOfShares;
            
        
            
            
        stockPortfolioA.totalValue = (stockPortfolioA.numberOfShares * stockPortfolioA.currentSharePrice);
        stockPortfolioB.totalValue = (stockPortfolioB.numberOfShares * stockPortfolioB.currentSharePrice);
        stockPortfolioC.totalValue = (stockPortfolioC.numberOfShares * stockPortfolioC.currentSharePrice);
        stockPortfolioD.totalValue = (stockPortfolioD.numberOfShares * stockPortfolioD.currentSharePrice);
        
        
        
        cout << " Stock Name " << " Stock Sector " << " Number of Shares" << " Current Value " << " Total Value " << endl;
        cout << "" << endl;
        cout << " ---------- " << " ------------ " << " ----------------" << " ------------- " << " ----------- " << endl;
        cout <<" " << stockPortfolioA.stockName << "        " << stockPortfolioA.sector<< "             " << stockPortfolioA.numberOfShares << "               " <<  stockPortfolioA.currentSharePrice <<  "             "  << stockPortfolioA.totalValue << endl;
        cout <<" " << stockPortfolioB.stockName << "        " << stockPortfolioB.sector<< "             " << stockPortfolioB.numberOfShares << "               " <<  stockPortfolioB.currentSharePrice <<  "             "  << stockPortfolioB.totalValue << endl;
        cout <<" " << stockPortfolioC.stockName << "        " << stockPortfolioC.sector<< "             " << stockPortfolioC.numberOfShares << "               " <<  stockPortfolioC.currentSharePrice <<  "             "  << stockPortfolioC.totalValue << endl;
        cout <<" " << stockPortfolioD.stockName << "        " << stockPortfolioD.sector<< "             " << stockPortfolioD.numberOfShares << "               " <<  stockPortfolioD.currentSharePrice <<  "             "  << stockPortfolioD.totalValue << endl;
        cout << "Total Portfolio: $" << stockPortfolioA.totalValue + stockPortfolioB.totalValue + stockPortfolioC.totalValue + stockPortfolioD.totalValue ;
   
   
 }