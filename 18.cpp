using namespace std;
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>

//struct
struct node{
        int data;
        node* parent;
        node* parent2;
        node* childL;
        node* childR;
};

//struct constructor
struct node* newNode(int value){
    node* n = new node;
    n->data = value; 
    n->parent = NULL;
    n->parent2 = NULL;
    n->childL = NULL;
    n->childR = NULL;
    return n;
}

//insert node
struct node* insertValue(struct node* root, int value, queue<node *>& q){
    if((root != NULL) && (q.front()->childL == NULL) && (q.front() != NULL) && (q.front()->parent != NULL) && (q.front()->parent->childL != NULL) && (q.front()->parent->childL->childR != NULL)){
        q.front()->childL = q.front()->parent->childL->childR;
        q.front()->parent->childL->childR->parent2 = q.front();
    }
        node* node = newNode(value);
        if (root == NULL){
            root = node;
        //change to share middle nodes
        }else if (q.front()->childL == NULL){ 
            q.front()->childL = node;
            node->parent2 = q.front();
        }else{
            q.front()->childR = node;
            node->parent = q.front();
            q.pop();   
        } 
        q.push(node);
        return root;
}



//build tree
node* createTree(int arr[], int n){
    node* root = NULL;
    queue<node*> q;
    for (int i = 0; i < n; i++){
        root = insertValue(root, arr[i], q);
    }
    return root;
}

vector<int> maxSumPath(struct node* start, int sum, vector<int> x){
    if(start->childL == NULL){
       x.push_back(sum + start->data);
       return x;
    }
    x = maxSumPath(start->childL, sum + start->data, x);
    x = maxSumPath(start->childR, sum + start->data, x);
    return x;
}

int maxPath(int arr[], int size){
    cout << size << endl;
    int p1 = 1;
    int p2 = 1;
    int boxSize = 3;
    int boxStart = 3;
    arr[1] = arr[1] + arr[0];
    arr[2] = arr[2] + arr[0];
    for(int i = 3; i < size; i++){
        //cout << arr[i] << endl;
        if(i == boxStart){
            arr[i] = arr[i] + arr[p1];
            p2++;
        }else if(i > boxStart && i < boxStart + boxSize - 2){
            if(arr[p1] > arr[p2]){
                arr[i] = arr[i] + arr[p1];
            }else{
                arr[i] = arr[i] + arr[p2];
            }
            p1++;
            p2++;
        }else if(i == boxStart + boxSize - 1){
            arr[i] = arr[i] + arr[p1];
            p1++;
            p2++;
            boxStart = i+1;
            boxSize++;
        }else if(i == boxStart + boxSize - 2){
            if(arr[p1] > arr[p2]){
                arr[i] = arr[i] + arr[p1];
            }else{
                arr[i] = arr[i] + arr[p2];
            }
            p1++;
        }
    }
    int max = 0; 
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            cout << arr[i] << endl;
            max = arr[i];
        }
    }
    return max;
}
 
// Driver code
int main()
{
    vector<int> maxSum;
    /*int arr[] = {75, 95, 64, 17, 47, 82, 18, 35, 87, 10, 20, 04, 82, 47, 65, 19, 01, 23, 75,
    03, 34, 88, 02, 77, 73, 07, 63, 67, 99, 65, 04, 28, 06, 16, 70, 92,41, 41, 26, 56, 83,
    40, 80, 70, 33, 41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 53, 71, 44, 65, 25, 43, 91, 52,
    97, 51, 14, 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 91, 71, 52, 38, 17, 14, 91,
    43, 58, 50, 27, 29, 48, 63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 04, 62,
    98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23};*/
    ifstream in;
    in.open("triangle.txt");
    int arr[5050];
    int element;
    if (in.is_open()) {
        int i = 0;
        while (in >> element) {
            arr[i++] = element;
        }
    }
    in.close();
    int m1 = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = createTree(arr, n);
    //brute force
    //maxSum = maxSumPath(root, 0, maxSum);
    m1 = maxPath(arr, n);
    int m = 0;
    
    for(int i = 0; i < maxSum.size(); i++){
        if(maxSum.at(i) > m){
            m = maxSum.at(i);
        }
    }
    cout << m1 << endl;
    cout << m << endl;
    return 0;
}
