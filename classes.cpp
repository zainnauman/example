#include <iostream>
#include <string>


class Gun
{
    public:
    Gun(std::string name, int fireRate, std::string fireType, int magCapacity,int currentAmmo);
    std::string getName();
    void reload(int magCapacity, int* currentAmmo);
    int getFireRate();
    std::string getFireType();
    void shoot(int* currentAmmo);
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
    //try to implement shoot mechanic with pointers ->completed
    //NOTE: upon implementing pointers, it is feasible to remove the getCurrentAmmo method because, 
    //Current ammo now behaves like a global variable
    
    int currentAmmo = 19;
    int maxAmmo = 30;
    int bulletsToShoot = 0;

    int* capnt = &currentAmmo;

    Gun gun("ak47",10,"auto",maxAmmo,currentAmmo);
    std::cout<< "your gun is an: " <<gun.getName() << std::endl;
    std::cout << "the gun currently has " << currentAmmo << " bullets in its magazine\n";

    std::cout << "how many bullets would you like to shoot?" << std::endl;
    std::cin >> bulletsToShoot;
    //bulletsToShoot -=30;

    for(int i = 0; i<=bulletsToShoot && *capnt > 0; ++i)
    {
       gun.shoot(capnt);
       std::cout << "bang " << /*gun.getCurrentAmmo()*/*capnt << " ";
    }

    std::cout <<std::endl;

    gun.reload(maxAmmo,capnt /*currentAmmo*/);
    std::cout <<"the gun is fully loaded with: "<</*gun.getCurrentAmmo()*/*capnt <<" bullets"<< std::endl;

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
void Gun::reload(int magCapacity,int* currentAmmo)
{
    std::cout << "reloading!!" << std::endl;
    *currentAmmo = magCapacity;
}
int Gun::getFireRate()
{
    return fireRate;
}
std::string Gun::getFireType()
{
    return fireType;
}
//this method has become redundant upon the implementation of pointers
int Gun::getCurrentAmmo()
{
    return currentAmmo;
}
void Gun::shoot(int* currentAmmo)
{
    *currentAmmo = *currentAmmo - 1;
}