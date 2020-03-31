class ProductionFile{

  public:
    void prodMethod() {
      cout << "Hello World!";
    }
  public:
    void feature2() {
      cout << "feature 2 data";
    }
}

int main() {
  ProductionFile pObj;
  pObj.prodMethod();
  pObj.feature2();
  return 0;
}
