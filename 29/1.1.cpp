#include <iostream>
#include <vector>

class Talent
{
public:
    virtual ~Talent() = default;
    virtual void invoke() = 0;
};

class Dancing : public Talent
{
public:
    virtual void invoke() override
    {
        std::cout << "It can \"Dance\"" << std::endl;
    }
};
class Swimming : public Talent
{
public:
    virtual void invoke() override
    {
        std::cout << "It can \"Swim\"" << std::endl;
    }
};

class Counting : public Talent
{
public:
    virtual void invoke() override
    {
        std::cout << "It can \"Count\", smart Dog." << std::endl;
    }
};

class Dog
{
public:
    Dog(std::string name) : _name(name)
    {

    }

    void add(Talent* talent)
    {
        _talents.push_back(talent);
    }

    void show_talents()
    {
        std::cout << "This is " << _name << " and it has some talents:" << std::endl;
        for(size_t i = 0; i < _talents.size(); ++i)
        {
            std::cout << "\t";
            _talents[i]->invoke();
        }
    }

    ~Dog()
    {
        for(size_t i = 0; i < _talents.size(); ++i)
        {
            if (_talents[i] != nullptr)
                delete _talents[i];
        }
    }

private:
    std::string _name;
    std::vector<Talent*> _talents;
};

int main() {
    Dog d("Steve");

    d.add(new Dancing);
    d.add(new Swimming);
    d.show_talents();

    return 0;
}
