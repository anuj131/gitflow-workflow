class ProductionFile{

  public:
    void prodMethod() {
      cout << "Hello World!";
    }
  public:
    void feature1() {
      cout << "feature1 data";
    }
    void feature2() {
      cout << "feature 2 data";

    }
}

int main() {
  ProductionFile pObj;
  pObj.prodMethod();
  pObj.feature1();
  pObj.feature2();
  return 0;
}
