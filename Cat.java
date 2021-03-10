public class Cat {
  private String name;
  private int age;

  public Cat(){
    name = "Default cat";
    age = 0;
  }

  public Cat(String name, int age){
    this.name = name;
    this.age = age;
  }

  public String getName(){ return name; }
  public int getAge(){ return age; }

  public void setName(String age){ this.name = name; }
  public void setAge(int age){ 
    if(age < 0) age = 0
    this.age = age; 
  }
}

public class MainClass{
  public static void main(String[] args){
    Cat tesla = new Cat("Tesla", 7);
    Cat stray = new Cat();
    stray.setAge(-1000);
  }

}
