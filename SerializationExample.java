public class SerializationExample{
    public static void main(String[] args) {
        String filename="serialized_data.ser";
        Myclass obj=new Myclass(42);
        System.out.println("Original data: "+obj.data);
        obj.serialize(filename);
        obj.data=0;
        System.out.println("Data after reset: "+obj.data);
        Myclass deserializedObj =Myclass.deserialize(filename);
        if(deserializedObj != null){
            System.out.println("Data after deserialization: "+deserializedObj.data);
        }
    }
}

