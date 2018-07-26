function serialEventHandler(ser,~,appfile)

bytes = get(ser,'BytesAvailable');
if(bytes>0)
    data=fread(ser,bytes);

    if(data(1) == 'Z')
        {
            fclose(ser);
            obj=videoinput('winvideo',1;'YUY2_640x480');
            obj.ReturnedColorspace = 'rgb';
            preview(obj);
            start(obj);
            pause(3);
            A=getsnapshot(obj); 
            imshow(A);
            fullimagefilename=fullfile(pwd,'myfirst1.jpg');
            imwrite(A,fullimagefilename);
        }
    end
    fwrite(appfile,data);
    
end
end
