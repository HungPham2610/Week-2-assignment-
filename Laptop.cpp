#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand, model, gpu;
    int ramGB;
    int storageGB;
public:
    Laptop(string b="Dell", string m="XPS 13", int ram=8, int st=256, string g="iGPU") //  Constructor với giá trị mặc định
        : brand(b), model(m), gpu(g), ramGB(max(0,ram)), storageGB(max(0,st)) {}

    void displayInfo() const {
        cout << "Brand: " << brand << "\nModel: " << model // Hiển thị thông tin laptop
             << "\nRAM: " << ramGB << " GB\nStorage: " << storageGB // Hiển thị thông tin laptop
             << " GB\nGPU: " << gpu << "\n"; // Hiển thị thông tin laptop
    }
    bool checkRAM(int required) const { return ramGB >= required; }
    void upgradeRAM(int add) { if (add > 0) ramGB += add; }
    bool checkGPUForGaming() const { return gpu != "iGPU"; } // demo đơn giản
};

int main() {
    Laptop lap("Lenovo", "Legion Slim", 16, 512, "RTX 4060"); // Khởi tạo đối tượng lap với tên "Lenovo Legion Slim", RAM 16GB, SSD 512GB, GPU "RTX 4060"
    lap.displayInfo();
    cout << (lap.checkRAM(16) ? "Du RAM cho phan mem 16GB\n" : "Thieu RAM\n");  // Kiểm tra RAM
    cout << (lap.checkGPUForGaming() ? "Choi game OK\n" : "Khong hop ly cho game\n"); // Kiểm tra GPU
    lap.upgradeRAM(8);
    cout << "Sau nang cap RAM: ";  // Nâng cấp RAM thêm 8GB
    cout << (lap.checkRAM(24) ? "Du 24GB\n" : "Chua du 24GB\n"); // Kiểm tra RAM sau nâng cấp
    return 0;
}
