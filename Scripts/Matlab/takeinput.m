function takeinput()
obj=videoinput('winvideo',1,'YUY2_640x480');
obj.ReturnedColorspace = 'rgb';
preview(obj);
start(obj);
pause(3);
A=getsnapshot(obj); 
imshow(A);
fullimagefilename=fullfile(pwd,'test21.jpg');
imwrite(A,fullimagefilename);
end
