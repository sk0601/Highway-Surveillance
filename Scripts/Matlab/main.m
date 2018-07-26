appfile=fopen('\Users\user\Desktop\image capt\out.txt','a');
ser=serial('COM5');

set(ser,'BytesAvailableFcnMode','byte');
set(ser,'BytesAvailableFcnCount',1);
set(ser,'Timeout',200);
set(ser,'BytesAvailableFcn',{@serialEventHandler,appfile});


fopen(ser);

takeinput();
recognition();
fclose(ser);

