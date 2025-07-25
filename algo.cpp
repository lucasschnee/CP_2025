vector<pair<int, int>> directions = {{0,1},{0,-1},{-1,0},{1,0}};

for (int i=0; i<n; ++i) {
}

vector<int> v1;

 auto it = s.find(4);
    if (it != s.end()) {
    
 }

 int x = std::stoi(s);  // string to int
 char b = (c-'0'); // char to int

struct UnionFind {
    std::vector<int> parent;
    std::vector<int> size;  // or rank

    // Initialize with n elements, each in its own set
    UnionFind(int n) : parent(n), size(n, 1) {
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    // Find root of x with path compression
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    // Union sets containing x and y
    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY)
            return false;  // already connected

        // Union by size (attach smaller tree to larger)
        if (size[rootX] < size[rootY])
            std::swap(rootX, rootY);

        parent[rootY] = rootX;
        size[rootX] += size[rootY];
        return true;
    }

    // Check if x and y are in the same set
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};


// Comparator function
bool myCmp(const std::vector<int>& a, const std::vector<int>& b) {
    return a[1] < b[1];
}

int main() {
    std::vector<std::vector<int>> intervals = {
        {1, 5},
        {3, 7},
        {2, 6},
        {4, 8}
    };

    std::sort(intervals.begin(), intervals.end(), myCmp);
}


char upper = std::toupper(ch);  // converts to uppercase 'A'
    char lower = std::tolower(upper); // converts back to lowercase 'a'


if (c >= '0' && c <= '9')


priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;

