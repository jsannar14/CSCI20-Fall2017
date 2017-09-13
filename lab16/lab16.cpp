//Created By: John Sannar
//Created On: 9/12/2017
//A stock portfolio coding thing

 #include <iostream>
 using namespace std;
 
 struct stockPortfolio { 
  string stockName = ""; // the stock name delcaration
  string sector = ""; // the sector type 
  int numberOfShares = 0; // number of shares
  double currentSharePrice = 0.0; // current share price of the 
  double totalValue = 0.0;
 };
 
 int main()
 {
   stockPortfolio stockPortfolioA; // First Stock Values
   
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
   
 stockPortfolio stockPortfolioB; // Second stock Values
   
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
        
   
   stockPortfolio stockPortfolioC; // Third value inputs
   
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
            
    stockPortfolio stockPortfolioD; // fourth stock portfolio
   
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
            
        
            
            
        stockPortfolioA.totalValue = (stockPortfolioA.numberOfShares * stockPortfolioA.currentSharePrice);// calculator for the total value.
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
 
 /*
 Stock Name  Stock Sector  Number of Shares Current Value  Total Value 

 ----------  ------------  ---------------- -------------  ----------- 
 FordM        A             87               18.76             1632.12
 Albertsn        C             542               34.39             18639.4
 AAPL        T             5               145.91             729.55
 TSLA        A             50               375.64             18782
Total Portfolio: $39783.1

 Stock Name  Stock Sector  Number of Shares Current Value  Total Value 

 ----------  ------------  ---------------- -------------  ----------- 
 Albertsn        C             542               34.39             18639.4
 AAPL        T             5               145.91             729.55
 TSLA        A             50               375.64             18782
 Amz        C             243               982.58             238767
Total Portfolio: $276918

 
 
 
 */