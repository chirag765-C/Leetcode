class MedianFinder {
public:
   
    priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    
    MedianFinder() {
        
    }

    void addNum(int num) {
     int lsize=maxh.size();
        int rsize=minh.size();
        if(lsize==0){
            maxh.push(num);
        }
        else if(lsize==rsize){
            if(num<minh.top()){
                maxh.push(num);
            }
            else{
                int temp=minh.top();
                minh.pop();
                maxh.push(temp);
                minh.push(num);
            }
        }
        //when lsize>risze and rsize considering 0
        else {
            if(minh.size()==0){
                if(num>maxh.top()){
                    minh.push(num);
                }
                else{
                    int temp=maxh.top();
                    maxh.pop();
                    minh.push(temp);
                    maxh.push(num);
                }
            }
            else if(num>=minh.top()){
                minh.push(num);
            }
            else{
                if(num<maxh.top())
                {
                    int temp=maxh.top();
                    maxh.pop();
                    minh.push(temp);
                    maxh.push(num);
                }
                
                else{
                    minh.push(num);
                    
                }
            }
           
            
        }
            
       
    }
    
    double findMedian() {
        int lsize=maxh.size();
        int rsize=minh.size();
        if((lsize+rsize)%2!=0){
            return maxh.top();
        }
  return (minh.top()+maxh.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */