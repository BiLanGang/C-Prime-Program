using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata;

namespace SchoolRoll.Models
{
    public partial class srContext : DbContext
    {
        public srContext()
        {
        }

        public srContext(DbContextOptions<srContext> options)
            : base(options)
        {
        }

        public virtual DbSet<Administrator> Administrator { get; set; }
        public virtual DbSet<Certificate> Certificate { get; set; }
        public virtual DbSet<Cet> Cet { get; set; }
        public virtual DbSet<Course> Course { get; set; }
        public virtual DbSet<Schoolroll> Schoolroll { get; set; }
        public virtual DbSet<Score> Score { get; set; }
        public virtual DbSet<Student> Student { get; set; }
        public virtual DbSet<Teacher> Teacher { get; set; }
        public virtual DbSet<Teachercourse> Teachercourse { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            if (!optionsBuilder.IsConfigured)
            {
#warning To protect potentially sensitive information in your connection string, you should move it out of source code. See http://go.microsoft.com/fwlink/?LinkId=723263 for guidance on storing connection strings.
                optionsBuilder.UseMySql("server=127.0.0.1;port=3306;user=root;password=wangben; database=sr;");
            }
        }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.Entity<Administrator>(entity =>
            {
                entity.HasKey(e => e.Ano)
                    .HasName("PRIMARY");

                entity.ToTable("administrator");

                entity.Property(e => e.Ano).HasColumnType("varchar(20)");

                entity.Property(e => e.Aname).HasColumnType("varchar(10)");

                entity.Property(e => e.Apassword).HasColumnType("varchar(20)");
            });

            modelBuilder.Entity<Certificate>(entity =>
            {
                entity.HasKey(e => new { e.Sno, e.Cerno })
                    .HasName("PRIMARY");

                entity.ToTable("certificate");

                entity.Property(e => e.Sno).HasColumnType("varchar(20)");

                entity.Property(e => e.Cerno).HasColumnType("varchar(20)");

                entity.Property(e => e.Cercompany).HasColumnType("varchar(50)");

                entity.Property(e => e.Cerdate).HasColumnType("date");

                entity.Property(e => e.Cername).HasColumnType("varchar(20)");

                entity.Property(e => e.Certype).HasColumnType("varchar(20)");

                entity.HasOne(d => d.SnoNavigation)
                    .WithMany(p => p.Certificate)
                    .HasForeignKey(d => d.Sno)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_CERTIFIC_REFERENCE_STUDENT");
            });

            modelBuilder.Entity<Cet>(entity =>
            {
                entity.HasKey(e => e.Eno)
                    .HasName("PRIMARY");

                entity.ToTable("cet");

                entity.HasIndex(e => e.Sno)
                    .HasName("FK_CET_REFERENCE_STUDENT");

                entity.Property(e => e.Eno).HasColumnType("int(11)");

                entity.Property(e => e.Egade).HasColumnType("decimal(10,0)");

                entity.Property(e => e.Etype).HasColumnType("varchar(10)");

                entity.Property(e => e.Sno).HasColumnType("varchar(20)");

                entity.HasOne(d => d.SnoNavigation)
                    .WithMany(p => p.Cet)
                    .HasForeignKey(d => d.Sno)
                    .HasConstraintName("FK_CET_REFERENCE_STUDENT");
            });

            modelBuilder.Entity<Course>(entity =>
            {
                entity.HasKey(e => e.Cno)
                    .HasName("PRIMARY");

                entity.ToTable("course");

                entity.Property(e => e.Cno).HasColumnType("varchar(20)");

                entity.Property(e => e.Cname).HasColumnType("varchar(50)");

                entity.Property(e => e.Cperiod).HasColumnType("decimal(10,0)");

                entity.Property(e => e.Credit).HasColumnType("decimal(10,0)");

                entity.Property(e => e.Ctype).HasColumnType("varchar(20)");
            });

            modelBuilder.Entity<Schoolroll>(entity =>
            {
                entity.HasKey(e => e.Sno)
                    .HasName("PRIMARY");

                entity.ToTable("schoolroll");

                entity.Property(e => e.Sno).HasColumnType("varchar(20)");

                entity.Property(e => e.Class)
                    .HasColumnName("class")
                    .HasColumnType("varchar(50)");

                entity.Property(e => e.Department)
                    .HasColumnName("department")
                    .HasColumnType("varchar(50)");

                entity.Property(e => e.Enter)
                    .HasColumnName("enter")
                    .HasColumnType("date");

                entity.Property(e => e.Length)
                    .HasColumnName("length")
                    .HasColumnType("int(11)");

                entity.Property(e => e.Major)
                    .HasColumnName("major")
                    .HasColumnType("varchar(50)");

                entity.Property(e => e.School)
                    .HasColumnName("school")
                    .HasColumnType("varchar(50)");

                entity.Property(e => e.Type)
                    .HasColumnName("type")
                    .HasColumnType("varchar(20)");

                entity.HasOne(d => d.SnoNavigation)
                    .WithOne(p => p.Schoolroll)
                    .HasForeignKey<Schoolroll>(d => d.Sno)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_SCHOOLRO_REFERENCE_STUDENT");
            });

            modelBuilder.Entity<Score>(entity =>
            {
                entity.HasKey(e => new { e.Sno, e.Cno })
                    .HasName("PRIMARY");

                entity.ToTable("score");

                entity.HasIndex(e => e.Cno)
                    .HasName("FK_SCORE_REFERENCE_COURSE");

                entity.Property(e => e.Sno).HasColumnType("varchar(20)");

                entity.Property(e => e.Cno).HasColumnType("varchar(20)");

                entity.Property(e => e.Grade)
                    .HasColumnName("grade")
                    .HasColumnType("decimal(10,0)");

                entity.HasOne(d => d.CnoNavigation)
                    .WithMany(p => p.Score)
                    .HasForeignKey(d => d.Cno)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_SCORE_REFERENCE_COURSE");

                entity.HasOne(d => d.SnoNavigation)
                    .WithMany(p => p.Score)
                    .HasForeignKey(d => d.Sno)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_SCORE_REFERENCE_STUDENT");
            });

            modelBuilder.Entity<Student>(entity =>
            {
                entity.HasKey(e => e.Sno)
                    .HasName("PRIMARY");

                entity.ToTable("student");

                entity.Property(e => e.Sno).HasColumnType("varchar(20)");

                entity.Property(e => e.Saddress).HasColumnType("varchar(100)");

                entity.Property(e => e.Sage).HasColumnType("int(11)");

                entity.Property(e => e.Sbirthday).HasColumnType("date");

                entity.Property(e => e.Sname).HasColumnType("varchar(10)");

                entity.Property(e => e.Spassword).HasColumnType("varchar(20)");

                entity.Property(e => e.Sphone).HasColumnType("varchar(20)");

                entity.Property(e => e.Ssex).HasColumnType("varchar(2)");
            });

            modelBuilder.Entity<Teacher>(entity =>
            {
                entity.HasKey(e => e.Tno)
                    .HasName("PRIMARY");

                entity.ToTable("teacher");

                entity.Property(e => e.Tno).HasColumnType("varchar(20)");

                entity.Property(e => e.Tage).HasColumnType("int(11)");

                entity.Property(e => e.Tbirthday).HasColumnType("date");

                entity.Property(e => e.Tname).HasColumnType("varchar(10)");

                entity.Property(e => e.Tpassword).HasColumnType("varchar(20)");

                entity.Property(e => e.Tphone).HasColumnType("varchar(20)");

                entity.Property(e => e.Tsex).HasColumnType("varchar(2)");
            });

            modelBuilder.Entity<Teachercourse>(entity =>
            {
                entity.HasKey(e => new { e.Tno, e.Cno })
                    .HasName("PRIMARY");

                entity.ToTable("teachercourse");

                entity.HasIndex(e => e.Cno)
                    .HasName("FK_TEACHERC_REFERENCE_COURSE");

                entity.Property(e => e.Tno).HasColumnType("varchar(20)");

                entity.Property(e => e.Cno).HasColumnType("varchar(20)");

                entity.HasOne(d => d.CnoNavigation)
                    .WithMany(p => p.Teachercourse)
                    .HasForeignKey(d => d.Cno)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_TEACHERC_REFERENCE_COURSE");

                entity.HasOne(d => d.TnoNavigation)
                    .WithMany(p => p.Teachercourse)
                    .HasForeignKey(d => d.Tno)
                    .OnDelete(DeleteBehavior.ClientSetNull)
                    .HasConstraintName("FK_TEACHERC_REFERENCE_TEACHER");
            });
        }
    }
}
