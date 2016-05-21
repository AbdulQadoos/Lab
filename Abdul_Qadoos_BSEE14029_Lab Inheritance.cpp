#include<iostream>
using namespace std;

class music_band
{
	protected:
		int counter;
		virtual int getcount()=0;
};


class symphony:protected music_band
{
	private:
		int band_members;
		int band_conductors;
	public:
		int getcount();
		int add_band();
		int add_conductor();
		int dec_band();
		int dec_conductor();
		int inc_band();
		int inc_conductor();
		symphony(int mem , int con );
};

int symphony::add_band()
{
	return this->band_members;
}

int symphony::add_conductor()
{
	return this->band_conductors;
}

int symphony::dec_band()
{
	this->band_members=this->band_members-1;
	this->counter=this->counter-1;
}

int symphony::dec_conductor()
{
   --this->band_conductors;
	this->counter--;
}


int  symphony::getcount()
{
	return this->counter;
}

int symphony::inc_band()
{
	++this->band_members;
	this->counter++;
}


int symphony::inc_conductor()
{
    ++this->band_conductors;
    this->counter++;
}

symphony::symphony(int mem, int con)
{
	this->band_members=mem;
	this->band_conductors=con;
	this->counter=mem+con;
}





class metal_band:protected music_band
{
	private:
		int band_member;
		int pyrotechnicians;
	public:
		int getcount();
		int add_band();
		int add_pyrotechnician();
		int dec_band();
		int dec_pyrotechnician();
		int inc_band();
		int inc_pyrotechnician();
		metal_band(int mem , int con );
};

int metal_band::add_band()
{
	return this->band_member;
}

int metal_band::add_pyrotechnician()
{
	return this->pyrotechnicians;
}

int metal_band::dec_band()
{
	this->band_member=this->band_member-1;
	this->counter=this->counter-1;
}

int metal_band::dec_pyrotechnician()
{
   --this->pyrotechnicians;
	this->counter--;
}


int  metal_band::getcount()
{
	return this->counter;
}

int metal_band::inc_band()
{
	++this->band_member;
	this->counter++;
}


int metal_band::inc_pyrotechnician()
{
    ++this->pyrotechnicians;
    this->counter++;
}

metal_band::metal_band(int mems, int pyr)
{
	this->band_member=mems;
	this->pyrotechnicians=pyr;
	this->counter=mems+pyr;
}



int main(void)
{
	int option;
	cout<<"1)Symphony(press 1)"<<endl;
	cout<<"2)Metal Band(press 2)"<<endl;
	cout<<"What do you want?"<<endl;
	cin>>option;
	if(option==1)
	{
    int c;
	int x;
	int y;
	cout<<"Enter Band Members:"<<endl;
	cin>>x;
	cout<<"Enter Band Conductors:"<<endl;
	cin>>y;
	symphony s(x,y);
	cout<<"Total Band_Member Number:"<<s.add_band()<<endl;
	cout<<"Total Band_Conductor Number:"<<s.add_conductor()<<endl;
	cout<<"1)To increment Band_Members(press 1)"<<endl;
	cout<<"2)To increment Band_Conductors(press 2)"<<endl;
	cout<<"3)To decrement Band_Members(press 3)"<<endl;
	cout<<"4)To decrement Band_Conductors(press 4)"<<endl;
	cout<<"5)To check band total members(mem+con) (press 5)"<<endl;
	cout<<"6)To quit Band(press 6)"<<endl;
	cout<<"What do you want?"<<endl;
	cin>>c;
	while(1)
	{   
	    if(c==1)
	    {
	    	cout<<"Total Band_Members"<<endl;
	    	s.inc_band();
	    	cout<<s.add_band()<<endl;
	    	
	    }
	    if(c==2)
	    {
	    	cout<<"Total Band_Conductors"<<endl;
	    	s.inc_conductor();
	    	cout<<s.add_conductor()<<endl;
	    }
	    if(c==3)
	    {
	    	cout<<"Total Band_Members"<<endl;
	    	s.dec_band();
	    	cout<<s.add_band()<<endl;
	    }
	    if(c==4)
	    {
	    	cout<<"Total Band_Conductors"<<endl;
	    	s.dec_conductor();
	    	cout<<s.add_conductor()<<endl;
	    }
	    if(c==5)
	    {
	    	cout<<"Total Members:"<<s.getcount()<<endl;
	    }
	    if(c==6)
	    {
	    	break;
	    }
	    cout<<"1)To increment Members(press 1)"<<endl;
	    cout<<"2)To increment Conductors(press 2)"<<endl;
	    cout<<"3)To decrement Members(press 3)"<<endl;
	    cout<<"4)To decrement Conductors(press 4)"<<endl;
	    cout<<"5)To check band total members(mem+con) (press 5)"<<endl;
	    cout<<"6)To quit Band(press 6)";
	    cout<<"What do you want?"<<endl;
	    cin>>c;
	    
	}
   }
   
   if(option==2)
   {
   	int g;
	int k;
	int q;
	cout<<"Enter Band Members:"<<endl;
	cin>>k;
	cout<<"Enter Pyrotechnicians:"<<endl;
	cin>>q;
	metal_band t(k,q);
	cout<<"Total Band_Member Number:"<<t.add_band()<<endl;
	cout<<"Total Pyrotechnicians Number:"<<t.add_pyrotechnician()<<endl;
	cout<<"1)To increment Band_Members(press 1)"<<endl;
	cout<<"2)To increment Pyrotechnicians(press 2)"<<endl;
	cout<<"3)To decrement Band_Members(press 3)"<<endl;
	cout<<"4)To decrement Pyrotechnicians(press 4)"<<endl;
	cout<<"5)To check band total members(mem+pyro) (press 5)"<<endl;
	cout<<"6)To quit Band(Press 6)"<<endl;
	cout<<"What do you want?"<<endl;
	cin>>g;
	while(1)
	{   
	    if(g==1)
	    {
	    	cout<<"Total Band_Members"<<endl;
	    	t.inc_band();
	    	cout<<t.add_band()<<endl;
	    	
	    }
	    if(g==2)
	    {
	    	cout<<"Total Pyrotechnicians"<<endl;
	    	t.inc_pyrotechnician();
	    	cout<<t.add_pyrotechnician()<<endl;
	    }
	    if(g==3)
	    {
	    	cout<<"Total Band_Members"<<endl;
	    	t.dec_band();
	    	cout<<t.add_band()<<endl;
	    }
	    if(g==4)
	    {
	    	cout<<"Total Pyrotechnicians"<<endl;
	    	t.dec_pyrotechnician();
	    	cout<<t.add_pyrotechnician()<<endl;
	    }
	    if(g==5)
	    {
	    	cout<<"Total Members:"<<t.getcount()<<endl;
	    }
	    if(g==6)
	    {
	    	break;
	    }
	    
	    cout<<"1)To increment Members(press 1)"<<endl;
	    cout<<"2)To increment Purotechnicians(press 2)"<<endl;
	    cout<<"3)To decrement Members(press 3)"<<endl;
	    cout<<"4)To decrement Pyrotechnicians(press 4)"<<endl;
	    cout<<"5)To check band total members(mem+con) (press 5)"<<endl;
	    cout<<"6)To quit Band(press 6)"<<endl;
	    cout<<"What do you want?"<<endl;
	    cin>>g;
	    
	}
   }
	
}
