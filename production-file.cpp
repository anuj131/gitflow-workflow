class ProductionFile{

  public:
    void prodMethod() {
      cout << "Hello World!";
    }
  public:
    void feature1() {
      cout << "feature1 data";
    }
}

int main() {
  ProductionFile pObj;
  pObj.prodMethod();
  pObj.feature1();
  return 0;
}
