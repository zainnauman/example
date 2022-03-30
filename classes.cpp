#include <iostream>
#include <string>


class Gun{
    public:
    Gun(std::string name, int fireRate, std::string fireType, int magCapacity,int currentAmmo);
    std::string getName();
    void reload(int magCapacity, int currentAmmo);
    int getFireRate();
    std::string getFireType();
    void shoot(int currentAmmo);
    int getCurrentAmmo();

    private:
    std::string name;
    int currentAmmo;
    int magCapacity;
    int fireRate;
    std::string fireType;
};

int main(void)
{

    //try to implement shoot mechanic with pointers
    int currentAmmo = 19;
    int maxAmmo = 30;
    Gun gun("ak47",10,"auto",maxAmmo,currentAmmo);
    std::cout<< "your gun is an: " <<gun.getName() << std::endl;
    std::cout << "the gun currently has " << currentAmmo << " bullets in its magazine\n";



   while (gun.getCurrentAmmo() > 11){
       gun.shoot(currentAmmo);
       std::cout << "bang " << gun.getCurrentAmmo() << " ";
    }
    std::cout <<std::endl;
    gun.reload(maxAmmo,currentAmmo);
    std::cout <<gun.getCurrentAmmo() << std::endl;

    return 0;
}

Gun::Gun(std::string name, int fireRate, std::string fireType, int magCapacity, int currentAmmo)
{
    this->name = name;
    this->fireRate = fireRate;
    this->fireType = fireType;
    this->magCapacity = magCapacity;
    this->currentAmmo = currentAmmo;
}
std::string Gun::getName()
{
    return name;
}
void Gun::reload(int magCapacity,int currentAmmo){
    std::cout << "reloading!!" << std::endl;
    this->currentAmmo = magCapacity;
}
int Gun::getFireRate(){
    return fireRate;
}
std::string Gun::getFireType(){
    return fireType;
}
int Gun::getCurrentAmmo(){
    return currentAmmo;
}
void Gun::shoot(int pnt){
    this->currentAmmo = this->currentAmmo - 1;
}
